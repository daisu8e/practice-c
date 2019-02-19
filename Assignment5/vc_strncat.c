/**
 * File              : vc_strncat.c
 * Author            : Danilo & Daisuke
 * Date              : Fri 8 Feb 2019
 */

char *vc_strncat(char *dest, char *src, int n) {
  char *p1 = dest;
  char *p2 = src;
  while (1) {
    if (!*p1) {
      for (int i = 0; *p2; p2++, i++) {
        if (i == n) break;
        *p1 = *p2;
        p1++;
      }
      *p1 = '\0';
      break;
    }
    p1++;
  }
  return dest;
}
