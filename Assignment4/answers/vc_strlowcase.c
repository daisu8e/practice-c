/**
 * File              : vc_strlowcase.c
 * Author            : Derrick Park
 * Date              : Wed  8 Aug 23:15:25 2018
 * Last Modified Date: Wed  8 Aug 23:15:25 2018
 * Last Modified By  : Derrick Park
 */

char *vc_strlowcase(char *str)
{
  int i;

  i = 0;
  while (str[i])
    if (str[i] >= 'A' && 'Z' >= str[i++])
      str[i - 1] += 32;
  return str;
}
