/**
 * File              : vc_map.c
 * Author            : Gui & Daisuke
 * Date              : Thu 14 Feb 2019
 */

#include <stdlib.h>

int *vc_map(int *tab, int length, int(*f)(int)) {
  int *result = (int *) malloc(length * sizeof(int));

  for (int i = 0; i < length; i++) {
    result[i] = (*f)(tab[i]);
  }

  return result;
}

