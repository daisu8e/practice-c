#include <string.h>

int vc_memcmp(const void *s1, const void *s2, size_t n) {
  int result = 0;
  char *p1 = s1;
  char *p2 = s2;
  char *p3 = s2 + n;
  for (; p2 != p3 && result == 0; p1++, p2++) result = *p1 - *p2;
  return result;
}
