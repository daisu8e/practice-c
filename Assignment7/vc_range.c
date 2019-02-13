#include <printf.h>
#include <stdlib.h>

int *vc_range(int min, int max) {
  if (min >= max) return NULL;
  int *result = (int *)malloc(sizeof(int) * (max - min));
  int *p = result;
  for (int i = min; i < max; i++, p++) *p = i;
  return result;
}

