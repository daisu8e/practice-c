#include <stdio.h>
#include "vc_abs.h"
#include "vc_param_to_tab.h"
#include "vc_stock.h"

int main(int argc, char *argv[]) {

  printf("\nExercise 00 ----------\n");

  printf("\nExercise 01 ----------\n");
  int a01 = -5;
  printf("%d\n", ABS(a01));

  printf("\nExercise 02 ----------\n");

  printf("\nExercise 03 ----------\n");
  t_stock *stock = vc_param_to_tab(argc, argv);
  printf("%d\n", stock->size_param);
  printf("%s\n", stock->str);
  printf("%s\n", stock->copy);
  for (int i = 0; i < argc; i++) {
    printf("%s\n", stock->words[i]);
  }

  printf("\nExercise 04 ----------\n");

  printf("\nExercise 05 ----------\n");

  return 0;
}