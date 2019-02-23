#include <stdio.h>
#include "libvc.h"

static void start(char *title) {
  printf("\n%s ----------\n", title);
}

static void end() {
  printf("\n");
}

void test_vc_memcmp() {
  start("vc_memcmp");
  char a[] = "aacde";
  char b[] = "abcde";
  int res3 = vc_memcmp(a, b, 4);
  printf("%d", res3);
  end();
}

