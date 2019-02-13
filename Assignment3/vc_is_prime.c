/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>

int vc_is_prime(int n)
{
    if (n == 0 && n == 1)
    {
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 6;
    printf("%d", vc_is_prime(n));
    return 0;
}