/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>

int vc_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
    if (s1[i] > s2[i])
    {
        // s1 > than s2
        return 1;
    }
    else if (s1[i] < s2[i])
    {
        // s1 < than s2
        return 0;
    }
    else
    {
        // Equals
        return -1;
    }
}

int main()
{
    char s1[16] = "Hello World";
    char s2[16] = "hello world";
    char n = 5;
    int result;
    result = vc_strncmp(s1, s2, n);
    printf("%d", result);
    // man strncmp
    // result = strncmp(s1, s2, n);
    // printf("%s", result);
    return 0;
}