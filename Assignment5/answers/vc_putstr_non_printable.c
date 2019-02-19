/**
 * File              : vc_putstr_non_printable.c
 * Author            : Derrick Park
 * Date              : Sun 12 Aug 21:40:33 2018
 * Last Modified Date: Sun 12 Aug 21:40:33 2018
 * Last Modified By  : Derrick Park
 */

#include <stdio.h>

static void	print_hex(unsigned char c)
{
	if ((c / 16) > 9)
		putchar((c / 16) - 10 + 'a');
	else
		putchar((c / 16) + '0');
	if ((c & 0xf) > 9)
		putchar((c & 0xf) - 10 + 'a');
	else
		putchar((c & 0xf) + '0');
}

void vc_putstr_non_printable(char *str)
{
  while (*str)
  {
    if (*str > 31 && *str < 127)
      putchar(*str++);
    else
    {
      putchar('\\');
      print_hex(*str++);
    }
  }
}
