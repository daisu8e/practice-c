/**
 * File              : vc_strcapitalize.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

char *vc_strcapitalize(char *str) {
  char *p = str;
  int is_capital = 1;
  for (; *p; p++) {
    if ('A' <= *p && *p <= 'Z') {
      if (!is_capital) { *p = *p - ('A' - 'a'); }
      is_capital = 0;
    } else if ('a' <= *p && *p <= 'z') {
      if (is_capital) { *p = *p + ('A' - 'a'); }
      is_capital = 0;
    } else {
      is_capital = 1;
    }
  }
  return str;
}
