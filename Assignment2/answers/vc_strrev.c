/**
 * File              : vc_strrev.c
 * Author            : Derrick Park
 * Date              : Tue 31 Jul 21:15:15 2018
 * Last Modified Date: Tue 31 Jul 21:15:15 2018
 * Last Modified By  : Derrick Park
 */

char *vc_strrev(char *str)
{
  int  i;
  int  j;
  int  len;
  char tmp;
  
  len = 0;
  while (str[++len]);
  for (i = 0, j = len - 1; i < j; i++, j--)
  {
    tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
  }
  return str;
}
