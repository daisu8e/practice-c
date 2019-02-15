/**
 * File              : vc_strlcat.c
 * Author            : Derrick Park
 * Date              : Fri 10 Aug 13:02:53 2018
 * Last Modified Date: Fri 10 Aug 13:02:53 2018
 * Last Modified By  : Derrick Park
 */


static int vc_strlen(char *str)
{
  int i;
  
  i = 0;
  while (str[i])
    i++;
  return i;
}

unsigned int vc_strlcat(char *dest, char *src, unsigned int size)
{
  unsigned int dest_len;
  unsigned int i;

  i = 0;
  while (dest[i] && i < size)
    i++;
  dest_len = i;
  if (size - dest_len == 0)
    return dest_len + vc_strlen(src);
  while (src[i - dest_len] && i < size - 1)
  {
    dest[i] = src[i - dest_len];
    i++;
  }
  dest[i] = '\0';
  return dest_len + vc_strlen(src);
}
