#include <stdio.h>
#include "libvc.h"

static void start(char *title) {
  printf("\n%s ----------\n", title);
}

static void end() {
  printf("\n");
}

void test_vc_strchr() {
  start("vc_strchr");
  char str[] = "abcdefg";
  char *res = vc_strchr(str, 'x');
  if (res == NULL) printf("NULL");
  else printf("%s", res);
  end();
}


