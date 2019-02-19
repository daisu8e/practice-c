/* ************************************ */
/*                                      */
/* vc_is_negative.c                     */
/*                                      */
/* By: Derrick                          */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_is_negative(int n)
{
  if (n < 0)
    putchar('N');
  else
    putchar('P');
}
