/**
 * File              : vc_strcat.c
 * Author            : Derrick Park
 * Date              : Fri 10 Aug 12:56:10 2018
 * Last Modified Date: Fri 10 Aug 12:56:10 2018
 * Last Modified By  : Derrick Park
 */

char *vc_strcat(char *dest, char *src)
{
  int i;
  int j;

  i = 0;
  j = 0;
  for (i = 0; dest[i] != '\0'; i++)
    ;
  for (j = 0; src[j] != '\0'; j++)
    dest[i + j] = src[j];
  dest[i + j] = '\0';
  return dest;
}
