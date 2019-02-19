/* ************************************ */
/*                                      */
/* vc_print_comb2.c                     */
/*                                      */
/* By: Derrick                          */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_print_comb2(void)
{
  int i;
  int k;

  i = 0;
  k = 0;
  while (i < 100)
  {
    k = i + 1;
    while (k < 100)
    {
      putchar(i / 10 + '0');
      putchar(i % 10 + '0');
      putchar(' ');
      putchar(k / 10 + '0');
      putchar(k % 10 + '0');
      if ((i / 10 != 9) || (i % 10 != 8))
      {
        putchar(',');
        putchar(' ');
      }
      k++;
    }
    i++;
  }
  putchar('\n');
}
