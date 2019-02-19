/**
 * File              : vc_str_is_lowercase.c
 * Author            : Derrick Park
 * Date              : Fri 10 Aug 12:24:36 2018
 * Last Modified Date: Fri 10 Aug 12:24:36 2018
 * Last Modified By  : Derrick Park
 */

int vc_str_is_lowercase(char *str)
{
  int i;

  i = 0;
  while (str[i])
    if (!(str[i] >= 'a' && str[i] <= 'z'))
      return 0;
  return 1;
}
