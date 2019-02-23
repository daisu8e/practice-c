#include <stdio.h>
#include "libvc.h"

static void start(char *title) {
  printf("\n%s ----------\n", title);
}

static void end() {
  printf("\n");
}

void test_vc_memmove() {
  start("vc_memmove");
  char src[] = "abcdefg";
  char dst[10];
  char *res = vc_memmove(src + 2, src, 3);
  char *p = src;
  for (; *p; p++) printf("%c", *p);
  end();
}

