/**
 * File              : vc_print_alphabet.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 05 Feb 2019
 */

#include <stdio.h>

void vc_print_alphabet() {
  for (char c = 'a'; c <= 'z'; c++) {
    putchar(c);
  }
}
