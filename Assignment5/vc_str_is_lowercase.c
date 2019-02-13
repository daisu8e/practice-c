/**
 * File              : vc_str_is_lowercase.c
 * Author            : Danilo & Daisuke
 * Date              : Fri 8 Feb 2019
 */

int vc_str_is_lowercase(char *str) {
  char *p = str;
  if (!*p) { return 1; }
  for (; *p; p++) {
    if (!('a' <= *p && *p <= 'z')) { return 0; }
  }
  return 1;
}
