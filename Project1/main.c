#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "vc_memmove.h"
#include "vc_memchr.h"
#include "vc_memcmp.h"
#include "vc_isalnum.h"
#include "vc_memdel.h"
#include "vc_strmap.h"
#include "vc_strsplit.h"
#include "vc_strchr.h"

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

static void test_vc_memmove() {
  start("vc_memmove");
  char src[] = "abcdefg";
  char dst[10];
  char *res = vc_memmove(src + 2, src, 3);
  char *p = src;
  for (; *p; p++) printf("%c", *p);
  end();
}

static void test_vc_memchr() {
  start("vc_memchr");
  char src[10] = "abcdefg";
  char *res = vc_memchr(src, 'x', sizeof(src));
  if (res == NULL) printf("NULL");
  else printf("%s", res);
  end();
}

static void test_vc_memcmp() {
  start("vc_memcmp");
  char a[] = "aacde";
  char b[] = "abcde";
  int res3 = vc_memcmp(a, b, 4);
  printf("%d", res3);
  end();
}

static void test_vc_isalnum() {
  start("vc_isalnum");
  int res = vc_isalnum('X');
  printf("%d", res);
  end();
}
static void test_vc_memdel() {
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

static void test_vc_strmap() {
  start("vc_strmap");
  char src[] = "abcdefg";
  char *res = vc_strmap(src, &to_upper_case);
  printf("%s", res);
  end();
}

static void test_vc_strsplit() {
  start("vc_strsplit");
  char **result = vc_strsplit("*hello*fellow***students*", '*');
  char **p = result;
  for (; **p; p++) printf("%s\n", *p);
  end();
}

static void test_vc_strchr() {
  start("vc_strchr");
  char str[] = "abcdefg";
  char *res = vc_strchr(str, 'x');
  if (res == NULL) printf("NULL");
  else printf("%s", res);
  end();
}

int main() {
  test_vc_memmove();
  test_vc_memchr();
  test_vc_memcmp();
  test_vc_isalnum();
  test_vc_memdel();
  test_vc_strmap();
  test_vc_strsplit();
  test_vc_strchr();
  return 0;
}