#include <stdlib.h>

static int get_array_length(char *s, char c) {
  int length = 0;
  char *p = s;
  for (; *p; p++) {
    if (*p == c) length++;
  }
  return length;
}

static int get_string_length(char *s, char c) {
  int length = 0;
  char *p = s;
  for (; *p != c; p++) length++;
  return length;
}

char **vc_strsplit(char const *s, char c) {
  int array_length = get_array_length(s, c);
  char **result = (char **)malloc(sizeof(char *) * (array_length + 1));
  if (result == NULL) return NULL;
  char *p = s;
  int i = 0;
  int j = 0;
  for (int string_length = 0; *p; p += string_length + 1) {
    string_length = get_string_length(p, c);
    if (!string_length) continue;
    result[i] = (char *)malloc(sizeof(char) * (string_length + 1));
    if (result[i] == NULL) return NULL;
    for (j = 0; j < string_length; j++) result[i][j] = p[j];
    result[i][j] = '\0';
    i++;
  }
  result[i] = (char *)malloc(sizeof(char) * 1);
  if (result[i] == NULL) return NULL;
  result[i][0] = '\0';
  return result;
}

