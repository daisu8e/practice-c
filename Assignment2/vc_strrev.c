/**
 * File              : vc_strrev.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 06 Feb 2019
 */

char *vc_strrev(char *str) {
  char *p1 = str;
  char *p2 = str; while (*(p2 + 1)) { p2++; }
  char c;
  while (p1 < p2) {
    c = *p1;
    *p1 = *p2;
    *p2 = c;
    p1++;
    p2--;
  }
  return str;
}

