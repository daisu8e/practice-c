/**
 * File              : vc_is_negative.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 05 Feb 2019
 */

#include <stdio.h>

void vc_is_negative(int n) {
  if (n < 0) {
    putchar('N');
  } else {
    putchar('P');
  }
}
