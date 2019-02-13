#include <stdlib.h>

static int convert_char_to_int(char *nbr) {
  char *p = nbr;
  for (; *p; p++) {

  }

}

char *vc_convert_base(char *nbr, char *base_from, char *base_to) {
  char *result = (char *) malloc(sizeof(char) * 255);
  result[0] = '1';
  result[1] = '1';
  result[2] = '\0';
  return result;
}

