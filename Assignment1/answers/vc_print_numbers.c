/* ************************************ */
/*                                      */
/* vc_print_numbers.c                   */
/*                                      */
/* By: Derrick                          */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_print_numbers(void)
{
  char nbr;

  nbr = '0';
  while (nbr <= '9')
    putchar(nbr++);
}
