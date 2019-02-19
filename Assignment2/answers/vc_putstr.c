/**
 * File              : vc_putstr.c
 * Author            : Derrick Park
 * Date              : Tue 31 Jul 21:03:42 2018
 * Last Modified Date: Tue 31 Jul 21:03:42 2018
 * Last Modified By  : Derrick Park
 */

#include <stdio.h>

void vc_putstr(char *str)
{
  while (*str != '\0')
    putchar(*str++);
}
