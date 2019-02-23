#include <stdio.h>
#include "libvc.h"

static void start(char *title) {
  printf("\n%s ----------\n", title);
}

static void end() {
  printf("\n");
}

static char to_upper_case(char c) {
  if (!(('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))) return c;
  return (char)(c - ('a' - 'A'));
}

void test_vc_strmap() {
  start("vc_strmap");
  char src[] = "abcdefg";
  char *res = vc_strmap(src, &to_upper_case);
  printf("%s", res);
  end();
}


