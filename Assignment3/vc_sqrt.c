/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>

int vc_sqrt(int n)
{
    int result;
    int num = 0;

    while (1)
    {
        if (result == n)
        {
            return num;
        }
        else if (result > n)
        {
            return 0;
        }
        else
        {
            num++;
            result = num * num;
        }
    }
}

int main()
{
    int n = 25;
    printf("%d", vc_sqrt(n));
    return 0;
}