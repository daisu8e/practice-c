/**
 * File              : vc_str_is_uppercase.c
 * Author            : Derrick Park
 * Date              : Fri 10 Aug 12:22:09 2018
 * Last Modified Date: Fri 10 Aug 12:22:09 2018
 * Last Modified By  : Derrick Park
 */

int vc_str_is_uppercase(char *str)
{
  int i;

  i = 0;
  while (str[i])
    if (!(str[i] >= 'A' && str[i] <= 'Z'))
      return 0;
  return 1;
}
