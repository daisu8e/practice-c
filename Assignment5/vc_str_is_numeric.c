/**
 * File              : vc_str_is_numeric.c
 * Author            : Danilo & Daisuke
 * Date              : Fri 8 Feb 2019
 */

int vc_str_is_numeric(char *str) {
  char *p = str;
  if (!*p) { return 1; }
  for (; *p; p++) {
    if (!('0' <= *p && *p <= '9')) { return 0; }
  }
  return 1;
}
