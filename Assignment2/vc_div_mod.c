/**
 * File              : vc_div_mod.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 06 Feb 2019
 */

void vc_div_mod(int a, int b, int *div, int *mod) {
  *div = a / b;
  *mod = a % b;
}
