/**
 * File              : vc_print_reverse_alphabet.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 05 Feb 2019
 */

#include <stdio.h>

void vc_print_reverse_alphabet() {
  for (char c = 'z'; c >= 'a'; c--) {
    putchar(c);
  }
}
