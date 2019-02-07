/**
 * File              : vc_strlen.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 06 Feb 2019
 */

int vc_strlen(char *str) {
  int length = 0;
  for (; *str; *str++) {
    length++;
  }
  return length;
}
