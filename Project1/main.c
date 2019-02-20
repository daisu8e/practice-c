#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "vc_memmove.h"
#include "vc_memchr.h"
#include "vc_memcmp.h"
#include "vc_isalnum.h"

int main() {

  printf("\nvc_memmove ----------\n");
  char src1[] = "abcdefg";
  char dst1[10];
  char *res1 = vc_memmove(src1+2, src1, 3);
  char *p1 = src1;
  for (; *p1; p1++) printf("%c", *p1);
  printf("\n");

  printf("\nvc_memchr ----------\n");
  char src2[10] = "abcdefg";
  char *res2 = vc_memchr(src2, 'x', sizeof(src2));
  if (res2 == NULL) printf("NULL");
  else printf("%s", res2);
  printf("\n");

  printf("\nvc_memcmp ----------\n");
  char a3[] = "aacde";
  char b3[] = "abcde";
  int res3 = vc_memcmp(a3, b3, 4);
  printf("%d", res3);
  printf("\n");

  printf("\nvc_isalnum ----------\n");
  int res4 = vc_isalnum('X');
  printf("%d", res4);
  printf("\n");

  return 0;
}