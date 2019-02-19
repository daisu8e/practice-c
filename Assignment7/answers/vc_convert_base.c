/**
 * File              : vc_convert_base.c
 * Author            : Derrick Park
 * Date              : Wed 15 Aug 12:11:55 2018
 * Last Modified Date: Wed 15 Aug 12:11:55 2018
 * Last Modified By  : Derrick Park
 */
#include <stdlib.h>
#include <stdio.h>

static char *vc_strrev(char *str)
{
    int i;
    int j;
    int len;
    char tmp;

    len = 0;
    while (str[++len])
        ;
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
    return str;
}

static int vc_atoi(char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    for (; *str != '\0'; str++)
    {
        if (*str < '0' || *str > '9')
            return 0;
        result = result * 10 + *str - '0';
    }
    return sign * result;
}

static size_t vc_strlen(char *str)
{
    size_t i;

    i = 0;
    while (*str++ != '\0')
        i++;
    return i;
}

static size_t vc_power(size_t nbr, int power)
{
    if (power == 0)
        return 1;
    if (power < 0)
        return 0;
    return nbr * vc_power(nbr, power - 1);
}

static size_t vc_get_decimal(char *nbr, int base, int size)
{
    int total;
    int i;
    char ch;

    i = -1;
    ch = 0;
    total = 0;
    while (nbr[++i])
    {
        ch = nbr[i];
        if (ch >= 'A' && ch <= 'F')
        {
            ch = 10 + (ch - 'A');
            total += ch * vc_power(base, size--);
        }
        else if (ch >= '0' && ch <= '9')
        {
            ch -= '0';
            total += ch * vc_power(base, size--);
        }
    }
    return total / base;
}

static char *decimal_to_base(int nbr, char *base_to)
{
    int base;
    int tmp;
    int len;
    int i;
    char *result;

    tmp = nbr;
    len = 0;
    base = vc_atoi(base_to);
    while (tmp)
    {
        tmp /= base;
        len++;
    }
    if (!(result = (char *)malloc(sizeof(len) + 1)))
        return NULL;
    i = 0;
    while (len--)
    {
        result[i++] = (nbr % base) + '0';
        nbr /= base;
    }
    result[i] = '\0';
    return vc_strrev(result);
}

char *vc_convert_base(char *nbr, char *base_from, char *base_to)
{
    int dec;
    dec = vc_get_decimal(nbr, vc_atoi(base_from), vc_strlen(nbr));
    return decimal_to_base(dec, base_to);
}

/*
** For those who want to know it works.
*/
int main()
{
    printf("%ld\n", vc_get_decimal("15", 16, 2));

    printf("%s\n", decimal_to_base(15, "8"));
    printf("%s from %s to %s = %s\n", "111", "2", "10", vc_convert_base("111", "2", "10"));
    return 0;
}
