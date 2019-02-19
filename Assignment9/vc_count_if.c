/**
 * File              : vc_count_if.c
 * Author            : Gui & Daisuke
 * Date              : Thu 14 Feb 2019
 */

int vc_count_if(char **tab, int(*f)(char*)) {
  int result = 0;
  int i = 0;
  while (tab[i] != '\0') {
    if ((*f)(tab[i]) == 1) result++;
    i++;
  }
  return result;
}

