#include <stdio.h>
#include "libvc.h"

static void start(char *title) {
  printf("\n%s ----------\n", title);
}

static void end() {
  printf("\n");
}

void test_vc_isalnum() {
  start("vc_isalnum");
  int res = vc_isalnum('X');
  printf("%d", res);
  end();
}

