/**
 * File              : vc_str_is_printable.c
 * Author            : Danilo & Daisuke
 * Date              : Fri 8 Feb 2019
 */

int vc_str_is_printable(char *str) {
  char *p = str;
  if (!*p) { return 1; }
  for (; *p; p++) {
    if (!('!' <= *p && *p <= '~')) { return 0; }
  }
  return 1;
}
