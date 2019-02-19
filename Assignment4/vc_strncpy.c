/**
 * File              : vc_strncpy.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

char *vc_strncpy(char *dest, char *src, unsigned int n)
{
    char *p = src;
    int i;
    for (i = 0; i < n; i++)
    {
        *dest = p[i];
        dest++;
    }

    return dest;
}
