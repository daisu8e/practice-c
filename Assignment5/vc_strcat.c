/**
 * File              : vc_strcat.c
 * Author            : Danilo & Daisuke
 * Date              : Fri 8 Feb 2019
 */

char *vc_strcat(char *dest, char *src) {
  char *p1 = dest;
  char *p2 = src;
  while (1) {
    if (!*p1) {
      for (; *p2; p2++) {
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

