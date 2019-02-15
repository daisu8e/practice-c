/**
 * File              : vc_strdup.c
 * Author            : Derrick Park
 * Date              : Wed 15 Aug 12:11:46 2018
 * Last Modified Date: Wed 15 Aug 12:11:46 2018
 * Last Modified By  : Derrick Park
 */
#include <stdlib.h>

char *vc_strdup(char *src)
{
    char *dst;
    int i;

    i = 0;
    while (src[i])
        i++;
    if (!(dst = (char *)malloc(sizeof(char) * (i + 1))))
        return NULL;
    i = -1;
    while (src[++i])
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}
