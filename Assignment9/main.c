/**
 * File              : main.c
 * Author            : Gui & Daisuke
 * Date              : Thu 14 Feb 2019
 */

#include <stdio.h>
#include "vc_foreach.h"
#include "vc_putnbr.h"
#include "vc_map.h"
#include "vc_any.h"
#include "vc_count_if.h"
#include "vc_is_sort.h"
#include "vc_sort_words.h"

static int vc_mult(int n) {
  return n * 2;
}

static int capialize(char *str) {
  if (65 <= str[0] && str[0] <= 90) {
    return 1;
  } else {
    return 0;
  }
}

static vc_is_bigger(int a, int b) {
  if (a >= b) {
    return -1;
  } else {
    return 0;
  }
}

static void vc_putstr(char *str) {
  int i = 0;
  while (str[i] != '\0') {
    putchar(str[i]);
    i++;
  }
}

static void vc_print_words(char **words){
  int i = 0;
  while(words[i] != '\0'){
    vc_putstr(words[i]);
    putchar('\n');
    i++;
  }
}

int main() {

  printf("\nExercise 01 ----------\n");
  int tab01[5] = {100, 50, 35, 98, 80};
  vc_foreach(tab01, 5, &vc_putnbr);

  printf("\nExercise 02 ----------\n");
  int tab02[5] = {100, 50, 35, 98, 80};
  int *result02 = vc_map(tab02, 5, &vc_mult);
  vc_foreach(result02, 5, &vc_putnbr);

  printf("\nExercise 03 ----------\n");
  char *tab03[4] = {"a", "B", "c", '\0'};
  int result03 = vc_any(tab03, &capialize);
  printf("%d\n", result03);

  printf("\nExercise 04 ----------\n");
  char *tab04[4] = {"a", "b", "c", '\0'};
  int result04 = vc_count_if(tab04, &capialize);
  printf("%d\n", result04);

  printf("\nExercise 05 ----------\n");
  int tab05[5] = {50, 35, 80, 98, 100};
  int result05 = vc_is_sort(tab05, 5, &vc_is_bigger);
  printf("%d\n", result05);

  printf("\nExercise 07 ----------\n");
  char *tab07[4] = {"ab", "aa", "ac", '\0'};
  vc_sort_words(tab07);
  vc_print_words(tab07);

  return 0;
}