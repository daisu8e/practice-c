#include <stdio.h>
#include "vc_pt.h"
#include "vc_ultimate_pt.h"
#include "vc_swap.h"
#include "vc_div_mod.h"
#include "vc_ultimate_div_mod.h"
#include "vc_putstr.h"
#include "vc_strlen.h"
#include "vc_strrev.h"
#include "vc_atoi.h"

int main() {
    // Exercise 00
//  int a;
//  vc_pt(&a);
//  printf("%d", a);

  // Exercise 01
//  int a;
//  int *b = &a;
//  int **c = &b;
//  int ***d = &c;
//  int ****e = &d;
//  int *****f = &e;
//  int ******g = &f;
//  int *******h = &g;
//  int ********i = &h;
//  int *********j = &i;
//  vc_ultimate_pt(j);
//  printf("%d", a);

  // Exercise 02
//  int a = 1;
//  int b = 2;
//  vc_swap(&a, &b);
//  printf("%d, %d", a, b);

  // Exercise 03
//  int a = 10;
//  int b = 3;
//  int div, mod;
//  vc_div_mod(a, b, &div, &mod);
//  printf("%d, %d", div, mod);

  // Exercise 04
//  int a = 10;
//  int b = 3;
//  vc_ultimate_div_mod(&a, &b);
//  printf("%d, %d", a, b);

  // Exercise 05
//  char *string = "Hello";
//  vc_putstr(string);

  // Exercise 06
//  char *string = "Hello";
//  int length = vc_strlen(string);
//  printf("%d", length);

  // Exercise 07
//  char string[] = "abcde";
//  printf("Input  : %s\n", string);
//  char *result = vc_strrev(string);
//  printf("Output : %s\n", result);

  // Exercise 08
  char string[] = "12345";
  printf("Input  : %s\n", string);
  int result = vc_atoi(string);
  printf("Output : %d\n", result);

  return 0;
}