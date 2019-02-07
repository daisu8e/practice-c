/**
 * File              : vc_ultimate_div_mod.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 06 Feb 2019
 */

void vc_ultimate_div_mod(int *a, int *b) {
  int div = *a / *b;
  int mod = *a % *b;
  *a = div;
  *b = mod;
}
