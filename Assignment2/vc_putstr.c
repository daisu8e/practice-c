/**
 * File              : vc_putstr.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 06 Feb 2019
 */

#include <stdio.h>

void vc_putstr(char *str) {
  for (; *str; *str++) {
    putchar(*str);
  }
}
