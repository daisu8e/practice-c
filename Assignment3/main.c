#include <stdio.h>
#include "vc_iterative_factorial.h"
#include "vc_recursive_factorial.h"
#include "vc_iterative_power.h"
#include "vc_recursive_power.h"
#include "vc_fibonacci.h"

int main() {

  printf("\nExercise 00 ----------\n");
  int result00 = iterative_factorial(6);
  printf("%d\n", result00);

  printf("\nExercise 01 ----------\n");
  int result01 = vc_recursive_factorial(6);
  printf("%d\n", result01);

  printf("\nExercise 02 ----------\n");
  int result02 = iterative_power(2, 3);
  printf("%d\n", result02);

  printf("\nExercise 03 ----------\n");
  int result03 = vc_recursive_power(2, 3);
  printf("%d\n", result03);

  printf("\nExercise 04 ----------\n");
  int result04 = vc_fibonacci(9);
  printf("%d\n", result04);

  return 0;
}