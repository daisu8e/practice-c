/**
 * File              : vc_print_number.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 05 Feb 2019
 */

#include <stdio.h>

void vc_print_numbers() {
  for (char c = '0'; c <= '9'; c++) {
    putchar(c);
  }
}
