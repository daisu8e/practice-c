/**
 * File              : vc_strupcase.c
 * Author            : Derrick Park
 * Date              : Wed  8 Aug 23:12:38 2018
 * Last Modified Date: Wed  8 Aug 23:12:38 2018
 * Last Modified By  : Derrick Park
 */

char *vc_strupcase(char *str)
{
  int i;

  i = 0;
  while (str[i])
    if (str[i] >= 'a' && 'z' >= str[i++])
      str[i - 1] -= 32;
  return str;
}
