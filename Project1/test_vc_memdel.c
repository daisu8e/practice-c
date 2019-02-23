#include <stdio.h>
#include "libvc.h"

static void start(char *title) {
  printf("\n%s ----------\n", title);
}

static void end() {
  printf("\n");
}

void test_vc_memdel() {
  start("vc_memdel");
  char a[10] = "abcdefg";
  char *b = (char *)malloc(sizeof(char) * 10);
  char *p1 = a;
  char *p2 = b;
  for (; *p1; p1++, p2++) *p2 = *p1;
  vc_memdel((void **)&b);
  if (b == NULL) printf("NULL");
  else printf("Not NULL");
  end();
}

