#include <stdio.h>
#include "libvc.h"

static void start(char *title) {
  printf("\n%s ----------\n", title);
}

static void end() {
  printf("\n");
}

void test_vc_strsplit() {
  start("vc_strsplit");
  char **result = vc_strsplit("*hello*fellow***students*", '*');
  char **p = result;
  for (; **p; p++) printf("%s\n", *p);
  end();
}


