/**
 * File              : vc_ultimate_range.c
 * Author            : Derrick Park
 * Date              : Wed 15 Aug 12:13:51 2018
 * Last Modified Date: Wed 15 Aug 12:13:51 2018
 * Last Modified By  : Derrick Park
 */
#include <stdlib.h>

int vc_ultimate_range(int **range, int min, int max)
{
    int i;
    int *arr;

    i = 0;
    if ((min >= max) || !(arr = (int *)malloc(sizeof(int) * (max - min))))
    {
        *range = NULL;
        return 0;
    }
    while (min < max)
        arr[i++] = min++;
    *range = arr;
    return i;
}
