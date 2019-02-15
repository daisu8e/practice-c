/**
 * File              : vc_str_is_printable.c
 * Author            : Derrick Park
 * Date              : Fri 10 Aug 12:35:14 2018
 * Last Modified Date: Fri 10 Aug 12:35:14 2018
 * Last Modified By  : Derrick Park
 */

int vc_str_is_printable(char *str)
{
  int i;

  i = 0;
  while (str[i])
    if (!(str[i] >= ' ' && str[i] <= '~'))
      return 0;
  return 1;
}
