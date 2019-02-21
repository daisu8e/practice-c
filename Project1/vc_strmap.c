#include <stdlib.h>

static int get_length(char *s) {
  int length = 0;
  char *p = s;
  for (; *p; p++) length++;
  return length;
}

char *vc_strmap(char const *s, char (*f)(char)) {
  int length = get_length(s);
  char *result = (char *)malloc(sizeof(char) * (length + 1));
  char *p1 = s;
  char *p2 = result;
  for (; *p1; p1++, p2++) *p2 = (*f)(*p1);
  *p2 = '\0';
  return result;
}

