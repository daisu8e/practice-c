/**
 * File              : vc_str_is_numeric.c
 * Author            : Derrick Park
 * Date              : Fri 10 Aug 12:20:16 2018
 * Last Modified Date: Fri 10 Aug 12:20:16 2018
 * Last Modified By  : Derrick Park
 */

int vc_str_is_numeric(char *str)
{
  int i;
  
  i = 0;
  while (str[i])
    if (!(str[i] >= '0' && str[i] <= '9'))
      return 0;
  return 1;
}
