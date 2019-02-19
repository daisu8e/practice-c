/**
 * File              : vc_strcmp.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

int vc_strcmp(char *s1, char *s2) {
  for (; *s1 && *s2; s1++, s2++) {
    if (*s1 - *s2) {
      return *s1 - *s2;
    }
  }
  return *s1 - *s2;
}