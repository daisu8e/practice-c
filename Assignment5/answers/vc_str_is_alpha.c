/**
 * File              : vc_str_is_alpha.c
 * Author            : Derrick Park
 * Date              : Fri 10 Aug 12:17:46 2018
 * Last Modified Date: Fri 10 Aug 12:17:46 2018
 * Last Modified By  : Derrick Park
 */

int vc_str_is_alpha(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (!((str[i] >= 'A' && str[i] <= 'Z') \
          || (str[i] >= 'a' && str[i] <= 'z')))
      return 0;
    i++;
  }
  return 1;
}
