/**
 * File              : vc_is_sort.c
 * Author            : Gui & Daisuke
 * Date              : Thu 14 Feb 2019
 */

int vc_is_sort(int *tab, int length, int(*f)(int, int)) {
  for (int i = 0; i < length - 1; i++) {
    if ((*f)(tab[i], tab[i + 1]) == -1) return 0;
  }
  return 1;
}
