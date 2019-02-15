/**
 * File              : vc_print_words.c
 * Author            : Derrick Park
 * Date              : Wed 15 Aug 12:10:31 2018
 * Last Modified Date: Wed 15 Aug 12:10:31 2018
 * Last Modified By  : Derrick Park
 */
#include <stdio.h>

void vc_print_words(char **words)
{
    int i;
    int j;

    i = 0;
    while (words[i])
    {
        j = 0;
        while (words[i][j])
            putchar(words[i][j++]);
        putchar('\n');
        i++;
    }
}
