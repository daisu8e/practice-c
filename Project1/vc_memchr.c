#include <string.h>

void *vc_memchr(const void *s, int c, size_t n) {
  char *p1 = s;
  char *p2 = s + n;
  for (; p1 != p2 && *p1 != c; p1++) ;
  return p1 == p2 ? NULL : (void *) p1;
}
