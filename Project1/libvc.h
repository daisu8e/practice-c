#include <stdlib.h>

#ifndef PROJECT1_LIBVC_H
#define PROJECT1_LIBVC_H

int vc_isalnum(int c);
void *vc_memchr(const void *s, int c, size_t n);
int vc_memcmp(const void *s1, const void *s2, size_t n);
void vc_memdel(void **ap);
void *vc_memmove(void *dst, const void *src, size_t len);
char *vc_strchr(const char *s, int c);
char *vc_strmap(char const *s, char (*f)(char));
char **vc_strsplit(char const *s, char c);

#endif //PROJECT1_LIBVC_H
