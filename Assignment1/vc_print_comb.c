/**
 * File              : vc_print_comb.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 05 Feb 2019
 */

#include <stdio.h>

void vc_vc_print_comb() {
  int isFirst = 1;
  for (char a = '0'; a <= '9'; a++) {
    for (char b = '0'; b <= '9'; b++) {
      for (char c = '0'; c <= '9'; c++) {
        if (a < b && b < c) {
          if (isFirst) {
            isFirst = 0;
          } else {
            putchar(',');
            putchar(' ');
          }
          putchar(a);
          putchar(b);
          putchar(c);
        }
      }
    }
  }
}
