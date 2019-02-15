/**
 * File              : vc_strlcpy.c
 * Author            : Derrick Park
 * Date              : Sun 12 Aug 21:44:40 2018
 * Last Modified Date: Sun 12 Aug 21:44:40 2018
 * Last Modified By  : Derrick Park
 */

static unsigned int vc_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return i;
}

unsigned int vc_strlcpy(char *dest, char *src, unsigned int size)
{
  unsigned int i;
  
  i = 0;
  while ((i < size - 1) && src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  
  return vc_strlen(src);
}
