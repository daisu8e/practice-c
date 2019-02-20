#include <string.h>

void *vc_memmove(void *dst, const void *src, size_t len) {
  if (len == 0) return dst;

  char *p1 = dst;
  char *p2 = src;

  if (p1 < p2) {
    register const char *p3 = p2 + len;
    do *p1++ = *p2++;
    while (p2 != p3);

  } else if (p1 > p2) {
    register const char *p3 = p2;
    p1 += len;
    p2 += len;
    do *--p1 = *--p2;
    while (p2 != p3);
  }

  return dst;
}
