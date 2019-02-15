/**
 * File              : vc_strncat.c
 * Author            : Derrick Park
 * Date              : Fri 10 Aug 12:59:25 2018
 * Last Modified Date: Fri 10 Aug 12:59:25 2018
 * Last Modified By  : Derrick Park
 */

char *vc_strncat(char *dest, char *src, int n)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (dest[i])
    i++;
  while ((j < n) && src[j])
  {
    dest[i + j] = src[j];
    j++;
  }
  dest[i + j] = '\0';
  return dest;
}
