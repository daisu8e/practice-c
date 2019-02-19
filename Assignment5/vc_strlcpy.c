/**
 * File              : vc_strlcpy.c
 * Author            : Danilo & Daisuke
 * Date              : Fri 8 Feb 2019
 */
#include <stdio.h>
#include <memory.h>


unsigned int vc_strlcpy(char *dest, char *src, unsigned int size) {
    for (int i = 0; i < size && i < size; ++i) {
        dest[i] = src[i];
    }
    return size;
}


int main() {

    char str1[10] = {'d', 'a', 'n', '\0'};
    char str2[30] = {'6', '6', '6', '6', '\0'};
    int n = 3;


    int r = strlcpy(str1, str2, n);


    char str3[10] = {'d', 'a', 'n', '\0'};
    char str4[30] = {'6', '6', '6', '6', '\0'};

    int r2 = vc_strlcpy(str3, str4, n);

    printf("String 1 is %s\n", str1);
    printf("String 2 is %s\n", str2);

    return 0;
}