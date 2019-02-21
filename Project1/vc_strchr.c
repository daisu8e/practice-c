#include <stdlib.h>

char *vc_strchr(const char *s, int c) {
  char *p = s;
  for (; *p; p++) {
    if (*p == c) return p;
  }
  return NULL;
}

