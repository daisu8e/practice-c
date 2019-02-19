#include <stdio.h>
#include <string.h>
#include "vc_strcpy.h"
#include "vc_strncpy.h"
#include "vc_strcmp.h"
#include "vc_strupcase.h"
#include "vc_strcapitalize.h"

int main() {

  printf("\nExercise 00 ----------\n");
  char dest00[5];
  char src00[5] = "good";
  vc_strcpy(dest00, src00);
  printf("%s", dest00);
  // man strcpy
  // strcpy(dest00, src00);
  // printf("%s", dest00);

  printf("\nExercise 01 ----------\n");
  char dest01[5];
  char src01[5] = "good";
  int characters = 3;
  vc_strncpy(dest01, src01, characters);
  printf("%s", dest01);
  // man strncpy
  // strncpy(dest01, src01, characters);
  // printf("%s", dest01);

  printf("\nExercise 02 ----------\n");

  printf("\nExercise 03 ----------\n");
  char a03[] = "abbc";
  char b03[] = "abbc";
  printf("strcmp    : %d\n", strcmp(a03, b03));
  printf("vc_strcmp : %d\n", vc_strcmp(a03, b03));

  printf("\nExercise 04 ----------\n");

  printf("\nExercise 05 ----------\n");
  char a05[] = "AbCdefg";
  printf("%s\n", vc_strupcase(a05));

  printf("\nExercise 06 ----------\n");

  printf("\nExercise 07 ----------\n");
  char a07[] = "hello, you are the best-programmer; code+coffee+beer+wine!";
  printf("%s\n", vc_strcapitalize(a07));

  return 0;
}