/* ************************************ */
/*                                      */
/* vc_print_reverse_alphabet.c          */
/*                                      */
/* By: Derrick                          */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_print_reverse_alphabet(void)
{
  char ltr;

  ltr = 'z';
  while (ltr >= 'a')
    putchar(ltr--);
}


