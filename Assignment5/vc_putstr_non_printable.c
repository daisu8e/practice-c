/**
 * File              : vc_putstr_non_printable.c
 * Author            : Danilo & Daisuke
 * Date              : Fri 8 Feb 2019
 */
#include <stdio.h>
#include <memory.h>

void vc_putstr_non_printable(char *str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] < 31) {
            putchar('\\ \\0');
        } else
            putchar(str[i]);
    }
}

int main() {

    char *str1 = "Hello\nwhat is your favorite food?";
    vc_putstr_non_printable(str1);

    return 0;
}
