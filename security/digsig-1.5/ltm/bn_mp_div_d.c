/* LibTomMath, multiple-precision integer library -- Tom St Denis
 *
 * LibTomMath is a library that provides multiple-precision
 * integer arithmetic as well as number theoretic functionality.
 *
 * The library was designed directly after the MPI library by
 * Michael Fromberger but has been written from scratch with
 * additional optimizations in place.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 *
 * Tom St Denis, tomstdenis@iahu.ca, http://math.libtomcrypt.org
 * 
 * Modifications:
 *    - 29-Sept-2003: A. Apvrille axelle.apvrille@ericsson.ca: porting to 2.5.66 Linux kernel
 *      In the kernel, only divisions and modular operations power of two are allowed.
 *      So / and % are replaced by the do_div macro.
 *       
 */
#include <tommath.h>
#include <asm/div64.h>

static int s_is_power_of_two(mp_digit b, int *p)
{
	int x;

	for (x = 1; x < DIGIT_BIT; x++) {
		if (b == (((mp_digit) 1) << x)) {
			*p = x;
			return 1;
		}
	}
	return 0;
}

/* single digit division (based on routine from MPI) */
int mp_div_d(mp_int * a, mp_digit b, mp_int * c, mp_digit * d)
{
	mp_int q;
	mp_word w;
	mp_digit t;
	int res, ix;

	/* cannot divide by zero */
	if (b == 0) {
		return MP_VAL;
	}

	/* quick outs */
	if (b == 1 || mp_iszero(a) == 1) {
		if (d != NULL) {
			*d = 0;
		}
		if (c != NULL) {
			return mp_copy(a, c);
		}
		return MP_OKAY;
	}

	/* power of two ? */
	if (s_is_power_of_two(b, &ix) == 1) {
		if (d != NULL) {
			*d = a->dp[0] & ((1 << ix) - 1);
		}
		if (c != NULL) {
			return mp_div_2d(a, ix, c, NULL);
		}
		return MP_OKAY;
	}

	/* three? */
	if (b == 3) {
		return mp_div_3(a, c, d);
	}

	/* no easy answer [c'est la vie].  Just division */
	if ((res = mp_init_size(&q, a->used)) != MP_OKAY) {
		return res;
	}

	q.used = a->used;
	q.sign = a->sign;
	w = 0;
	for (ix = a->used - 1; ix >= 0; ix--) {
		w = (w << ((mp_word) DIGIT_BIT)) | ((mp_word) a->dp[ix]);

		if (w >= b) {
			/* AxL: / and % ported to kernel 
			   t = (mp_digit)(w / b);
			   w = w % b;

			   mod = do_div((unsigned long) x, (long) y)
			   will set x to the quotient x/y and mod to the remainder x%y . 
			 */
			t = w;
			if (b == 0)
				return MP_VAL;
			w = do_div(t, b);
		} else {
			t = 0;
		}
		q.dp[ix] = (mp_digit) t;
	}

	if (d != NULL) {
		*d = (mp_digit) w;
	}

	if (c != NULL) {
		mp_clamp(&q);
		mp_exch(&q, c);
	}
	mp_clear(&q);

	return res;
}