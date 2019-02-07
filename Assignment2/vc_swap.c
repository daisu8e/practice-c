/**
 * File              : vc_swap.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 06 Feb 2019
 */

void vc_swap(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}

