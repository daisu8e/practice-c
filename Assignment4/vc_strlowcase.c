/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>

char *vc_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        // Code from ASCII
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}

int main()
{
    char src[16] = "VANCOuveR";
    char *result;
    result = vc_strlowcase(src);
    printf("%s", result);
    return 0;
}