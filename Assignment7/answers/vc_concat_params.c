/**
 * File              : vc_concat_params.c
 * Author            : Derrick Park
 * Date              : Wed 15 Aug 12:10:18 2018
 * Last Modified Date: Wed 15 Aug 12:10:18 2018
 * Last Modified By  : Derrick Park
 */
#include <stdlib.h>

static int vc_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

char *vc_concat_params(int argc, char **argv)
{
    int i;
    int j;
    int k;
    int total;
    char *result;

    total = 0;
    for (i = 0; i < argc; i++)
    {
        total += vc_strlen(argv[i]);
        total++;
    }
    if (!(result = (char *)malloc(sizeof(char) * (total + 2))))
        return NULL;
    k = 0;
    for (i = 0; i < argc; i++)
    {
        for (j = 0; j < vc_strlen(argv[i]); j++)
        {
            result[k++] = argv[i][j];
        }
        result[k++] = '\n';
    }
    result[k] = '\0';
    return result;
}
