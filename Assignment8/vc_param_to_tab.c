#include <printf.h>
#include <stdlib.h>
#include "vc_stock.h"
#include "vc_split_whitespaces.h"

static int parse_size_param(int ac, char **av) {
  int result = 0;
  for (int i = 0; i < ac; i++) {
    char *p = av[i];
    for (; *p; p++) {
      result++;
    }
  }
  return result;
}

static char *parse_str(int ac, char **av) {
  int length = parse_size_param(ac, av);
  char *str = (char *) malloc(sizeof(char) * (length + ac - 1));
  char *p1 = str;
  for (int i = 0; i < ac; i++) {
    char *p2 = av[i];
    for (; *p2; p1++, p2++) {
      *p1 = *p2;
    }
    *p1 = ' ';
    p1++;
  }
  return str;
}

static char *copy_parse_str(int size_param, char *str) {
  char *copy = (char *) malloc(size_param);
  char *p1 = str;
  char *p2 = copy;
  for (; *p1; p1++, p2++) {
    *p2 = *p1;
  }
  return copy;
}

struct s_stock *vc_param_to_tab(int ac, char **av) {
  t_stock *result = (t_stock *) malloc(sizeof(t_stock));
  result->size_param = parse_size_param(ac, av);
  result->str = parse_str(ac, av);
  result->copy = copy_parse_str(result->size_param, result->str);
  result->words = vc_split_whitespaces(result->str);
  return result;
}

