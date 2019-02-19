#include <stdlib.h>

char **vc_split_whitespaces(char *str) {
  char *p1 = str;
  int total = 0;
  int rows = 0;
  for (; *p1; p1++) {
    total++;
    if (*p1 == ' ' || *p1 == '\t' || *p1 == '\n') rows++;
  }
  total++;
  rows++;
  char **result = (char **) malloc(sizeof(char *) * (rows + 1));

  char *p2 = str;
  int row = 0;
  int start = 0;
  int length = 0;
  for (int i = 0; i < total; i++, p2++) {
    if (*p2 == ' ' || *p2 == '\t' || *p2 == '\n' || *p2 == '\0') {
      result[row] = (char *) malloc(sizeof(char) * length);
      char *p3 = result[row];
      int j;
      for (j = start; j < start + length; j++, p3++) *p3 = str[j];
      *p3 = '\0';

      row++;
      start = i + 1;
      length = 0;

    } else {
      length++;
    }
  }

  result[row] = (char *) malloc(sizeof(char) * 1);
  result[row][0] = '0';

  return &result;
}

