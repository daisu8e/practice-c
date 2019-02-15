/**
 * File              : vc_strstr.c
 * Author            : Derrick Park
 * Date              : Wed  8 Aug 22:40:52 2018
 * Last Modified Date: Wed  8 Aug 22:40:52 2018
 * Last Modified By  : Derrick Park
 */

char *vc_strstr(char *str, char *to_find)
{
  int i;
  int j;

  i = 0;
  j = 0;
  if (!to_find[0])
    return &str[i];
  while (str[i])
  {
    while ((str[i + j] == to_find[j]) && to_find[j])
      j++;
    if (!to_find[j])
      return &(str[i]);
    j = 0;
    i++;
  }
  return NULL;
}
