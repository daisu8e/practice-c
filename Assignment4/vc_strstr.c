/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>
#include <string.h>

char *vc_strstr(char *str, char *to_find)
{
    while (*str)
    {
        char *index = str;
        char *search = to_find;
        // If first character of sub string match, check for whole string
        while (*str && *search && *str == *search)
        {
            str++;
            search++;
        }
        // If complete sub string match, return starting address
        if (!*search)
        {
            return index;
        }
        str = index + 1; // Increament main string
    }
    return str;
}

int main()
{
    char src[16] = "asdaODsadsad";
    char to_find[16] = "OD";
    char *result;
    result = vc_strstr(src, to_find);
    printf("%s", result);
    // man strstr
    // result = strstr(src, to_find);
    // printf("%s", result);
    return 0;
}