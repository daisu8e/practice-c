/**
 * File              : vc_range.c
 * Author            : Derrick Park
 * Date              : Wed 15 Aug 12:12:51 2018
 * Last Modified Date: Wed 15 Aug 12:12:51 2018
 * Last Modified By  : Derrick Park
 */
#include <stdlib.h>

int *vc_range(int min, int max)
{
    int i;
    int *arr;

    i = 0;
    if (min > max || !(arr = (int *)malloc(sizeof(int) * (max - min))))
    {
        return NULL;
    }
    while (min < max)
    {
        arr[i++] = min++;
    }
    return arr;
}
