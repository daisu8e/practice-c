/**
 * File              : vc_strcmp.c
 * Author            : Derrick Park
 * Date              : Wed  8 Aug 22:49:53 2018
 * Last Modified Date: Wed  8 Aug 22:49:53 2018
 * Last Modified By  : Derrick Park
 */

int vc_strcmp(char *s1, char *s2)
{
  while (*s1 && (*s1 == *s2))
  {
    s1++;
    s2++;
  }
  return *(unsigned char *)s1 - *(unsigned char *)s2;
}
