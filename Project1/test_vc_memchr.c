#include <stdio.h>
#include "libvc.h"

static void start(char *title) {
  printf("\n%s ----------\n", title);
}

static void end() {
  printf("\n");
}

void test_vc_memchr() {
  start("vc_memchr");
  char src[10] = "abcdefg";
  char *res = vc_memchr(src, 'x', sizeof(src));
  if (res == NULL) printf("NULL");
  else printf("%s", res);
  end();
}
