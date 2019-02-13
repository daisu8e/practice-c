/**
 * File              : vc_strlcat.c
 * Author            : Danilo & Daisuke
 * Date              : Fri 8 Feb 2019
 */

unsigned int vc_strlcat(char *dest, char *src, unsigned int size) {
  char *p1 = dest;
  char *p2 = src;
  unsigned int result = 0;
  while (1) {
    if (!*p1) {
      for (int i = 0; *p2; p2++, i++) {
        if (result < size - 1) {
          *p1 = *p2;
          p1++;
        }
        result++;
      }
      *p1 = '\0';
      break;
    }
    p1++;
    result++;
  }
  return result;
}
