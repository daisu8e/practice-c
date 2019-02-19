/**
 * File              : vc_foreach.c
 * Author            : Gui & Daisuke
 * Date              : Thu 14 Feb 2019
 */

#include <printf.h>

void vc_foreach(int *tab, int length, void(*f)(int)) {
  for (int i = 0; i < length; i++) {
    (*f)(tab[i]);
    putchar('\n');
  }
}

