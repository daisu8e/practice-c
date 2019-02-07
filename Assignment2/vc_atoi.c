/**
 * File              : vc_atoi.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 06 Feb 2019
 */

int vc_atoi(char *str) {

  char *p1 = str;
  int position = 0;
  for (; *p1; p1++) {
    if (position == 0) {
      position = 1;
    } else {
      position = position * 10;
    }
  }

  char *p2 = str;
  int result = 0;
  for (; *p2; p2++) {
    result += (*p2 - '0') * position;
    position = position / 10;
  }

  return result;
}
