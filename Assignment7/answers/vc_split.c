/**
 * File              : vc_split.c
 * Author            : Derrick Park
 * Date              : Wed 15 Aug 12:10:44 2018
 * Last Modified Date: Wed 15 Aug 12:10:44 2018
 * Last Modified By  : Derrick Park
 */
#include <stdlib.h>
#include <stdio.h>

static int is_charset(char ch, char *charset)
{
    while (*charset)
    {
        while (*charset == ch)
            return 1;
        charset++;
    }
    return 0;
}

static int vc_count_words(char *str, char *charset)
{
    int count;

    count = 0;
    while (*str)
    {
        while (*str && (is_charset(*str, charset)))
            str++;
        if (*str && !is_charset(*str, charset))
        {
            count++;
            while (*str && !is_charset(*str, charset))
                str++;
        }
    }
    return count;
}

/*
**  Returns the number of characters until the next whitespace.
*/
static int vc_num_chars(char *str, char *charset)
{
    int len;

    len = 0;
    while (*str)
    {
        if (is_charset(*str, charset))
            break;
        str++;
        len++;
    }
    return len;
}

char **vc_split(char *str, char *charset)
{
    char **split_str;
    int i;
    int j;
    int len;
    int wc;

    i = 0;
    wc = vc_count_words(str, charset);
    if (!(split_str = (char **)malloc(sizeof(char **) * (wc + 1))))
        return NULL;
    while (*str && wc) /* wc to avoid going over the bound */
    {
        len = vc_num_chars(str, charset);
        if (len > 0)
        {
            split_str[i] = (char *)malloc(sizeof(char) * (len + 1)); /* +1 for '\0' error check needed */
            for (j = 0; j < len; j++)
                split_str[i][j] = str[j];
            split_str[i++][j] = '\0';
            wc--;
        }
        str += len + 1; /* +1 to skip the whitespace */
    }
    split_str[i] = 0;
    return split_str;
}

/*
** For those who want to test the code.
*/
int main()
{
    char str[] = "  das ";
    char *charset = "ab";
    char **arr = vc_split(str, charset);
    while (*arr)
        printf("%s\n", *arr++);
    return 0;
}
