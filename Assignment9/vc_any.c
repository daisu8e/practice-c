/**
 * File              : vc_any.c
 * Author            : Gui & Daisuke
 * Date              : Thu 14 Feb 2019
 */

int vc_any(char **tab, int(*f)(char*)) {
  int i = 0;
  while (tab[i] != '\0') {
    if ((*f)(tab[i]) == 1) return 1;
    i++;
  }
  return 0;
}

