#include <printf.h>
#include <stdlib.h>

char *vc_concat_params(int argc, char **argv) {
  char *result = (char *) malloc(sizeof(char *) * argc);
  char *p1= result;
  for (int i = 1; i < argc; i++) {
    char *p2 = argv[i];
    for (; *p2; p1++, p2++) *p1 = *p2;
    *p1 = '\n';
    p1++;
  }
  return result;
}
