#include <stdio.h>
#include <string.h>
#include "vc_strdup.h"
#include "vc_range.h"
#include "vc_ultimate_range.h"
#include "vc_concat_params.h"
#include "vc_split_whitespaces.h"
#include "vc_convert_base.h"

int main(int argc, char *argv[]) {

  printf("\nExercise 00 ----------\n");
  char src00[] = "abcde";
  char *dest00;
  printf("%s\n", strdup(src00));
//  printf("%s\n", vc_strdup(src00));

  printf("\nExercise 01 ----------\n");
  int min01 = 1;
  int max01 = 4;
  int *result01 = vc_range(min01, max01);
  if (result01 == NULL) {
    printf("Error\n");
  } else {
    for (int i = 0; i < max01 - min01; i++) {
      printf("%d\n", result01[i]);
    }
  }

  printf("\nExercise 02 ----------\n");
  int min02 = 1;
  int max02 = 4;
  int *range02;
  int range02_size = vc_ultimate_range(&range02, min02, max02);
  if (range02 == NULL && range02_size == 0) {
    printf("Error\n");
  } else {
    printf("size : %d\n", range02_size);
    for (int i = 0; i < range02_size; i++) {
      printf("%d\n", range02[i]);
    }
  }

  printf("\nExercise 03 ----------\n");
  char *result03 = vc_concat_params(argc, argv);
  printf("%s\n", result03);

  printf("\nExercise 04 ----------\n");
  char *str04 = "abc def\tghi\njkl";
  char **result04 = vc_split_whitespaces(str04);
  char **p04 = *result04;
  for (; **p04 != '0'; *p04++) {
    printf("%s\n", *p04);
  }

  printf("\nExercise 06 ----------\n");
  char nbr[] = "17";
  char base_from[] = "10";
  char base_to[] = "16";
  char *result06 = vc_convert_base(nbr, base_from, base_to);
  printf("%s\n", result06);

  return 0;
}