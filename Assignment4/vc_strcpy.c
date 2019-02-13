/**
 * File              : vc_strcpy.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

char *vc_strcpy(char *dest, char *src)
{
    char *p = src;
    for (; *p; p++)
    {
        *dest = *p;
        dest++;
    }
    return dest;
}
