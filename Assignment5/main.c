#include <stdio.h>
#include <string.h>
#include "vc_str_is_alpha.h"
#include "vc_str_is_numeric.h"
#include "vc_str_is_lowercase.h"
#include "vc_str_is_uppercase.h"
#include "vc_str_is_printable.h"
#include "vc_strcat.h"
#include "vc_strncat.h"
#include "vc_strlcat.h"
#include "vc_strlcpy.h"
#include "vc_putstr_non_printable.h"
#include "vc_print_memory.h"

int main() {

  printf("\nExercise 00 ----------\n");
  char str00[] = "ABCdef@";
  printf("%d\n", vc_str_is_alpha(str00));

  printf("\nExercise 01 ----------\n");
  char str01[] = "12a";
  printf("%d\n", vc_str_is_numeric(str01));

  printf("\nExercise 02 ----------\n");
  char str02[] = "abcdeF";
  printf("%d\n", vc_str_is_lowercase(str02));

  printf("\nExercise 03 ----------\n");
  char str03[] = "ABCDEf";
  printf("%d\n", vc_str_is_uppercase(str03));

  printf("\nExercise 04 ----------\n");
  char str04[] = "Aa1!\n";
  printf("%d\n", vc_str_is_printable(str04));

  printf("\nExercise 05 ----------\n");
  char dest05[11] = "12345";
  char src05[11] = "abcde";
//  printf("strcat    : %s\n", strcat(dest05, src05));
  printf("vc_strcat : %s\n", vc_strcat(dest05, src05));

  printf("\nExercise 06 ----------\n");
  char dest06[11] = "12345";
  char src06[11] = "abc";
  int n06 = 5;
//  printf("strncat    : %s\n", strncat(dest06, src06, n06));
  printf("vc_strncat : %s\n", vc_strncat(dest06, src06, n06));

  printf("\nExercise 07 ----------\n");
  char dest07[5] = "123";
  char src07[] = "abcde";
//  printf("strlcat    : %d, %s\n", strlcat(dest07, src07, sizeof(dest07)), dest07);
  printf("vc_strlcat : %d, %s\n", vc_strlcat(dest07, src07, sizeof(dest07)), dest07);

//  printf("\nExercise 08 ----------\n");
//  char src08[] = "abcde";
//  char dest08[] = "abcde";
//  unsigned int size08 = 0;
//  printf("%d\n", vc_strlcpy(dest08, src08, size08));
//
//  printf("\nExercise 09 ----------\n");
//  char str09[] = "abcde";
//  vc_putstr_non_printable(str09);
//
//  printf("\nExercise 10 ----------\n");
//  char addr10[] = "abcde";
//  unsigned int size10 = 0;
//  vc_print_memory(addr10, size10);

  return 0;
}