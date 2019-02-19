/* ************************************ */
/*                                      */
/* vc_print_comb.c                      */
/*                                      */
/* By: Derrick                          */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_print_comb(void)
{
  char n1;
  char n2;
  char n3;
  
  for (n1 = '0'; n1 <= '7'; n1++)
  {
    for (n2 = n1 + 1; n2 <= '8'; n2++)
    {
      for (n3 = n2 + 1; n3 <= '9'; n3++)
      {
        putchar(n1);
        putchar(n2);
        putchar(n3);
        if (n1 != '7' || n2 != '8' || n3 != '9')
        {
          putchar(',');
          putchar(' ');
        }
      }
    }
  }

}
