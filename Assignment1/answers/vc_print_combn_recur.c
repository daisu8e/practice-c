/**
 * File              : vc_print_combn_recur.c
 * Author            : Derrick Park
 * Date              : Wed  1 Aug 08:41:21 2018
 * Last Modified Date: Wed  1 Aug 08:41:21 2018
 * Last Modified By  : Derrick Park
 */

#include <stdio.h>
#include <stdbool.h>

static void print_chars(const char *chars, size_t size)
{
  for (; size; chars++, size--)
    putchar(*chars);
}

static void vc_print_combn_impl(bool *comma, char *buf, size_t col, int n)
{
  if (n == 0)
  {
    if (*comma)
      print_chars(", ", 2);
    print_chars(buf, col);
    *comma = true;
  }
  else
  {
    for (char c = buf[col - 1] + 1; c <= (char) ('9' - (n - 1)); c++)
    {
      buf[col] = c;
      vc_print_combn_impl(comma, buf, col + 1, n - 1);
    }
  }
}

void vc_print_combn(int n)
{
  char buf[10];

  buf[0] = '0' - 1;
  bool comma = false;
  vc_print_combn_impl(&comma, buf + 1, 0, n);
  putchar('\n');
}
