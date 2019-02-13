/**
 * File              : vc_strupcase.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

char *vc_strupcase(char *str) {
  char *p = str;
  for (; *p; p++) {
    if ('A' <= *p && *p <= 'Z') {
      continue;
    } else if ('a' <= *p && *p <= 'z') {
      *p = *p + ('A' - 'a');
    }
  }
  return str;
}
