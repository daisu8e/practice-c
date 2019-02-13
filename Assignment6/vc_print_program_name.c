/**
 * File              : vc_print_program_name.c
 * Author            : Danilo & Daisuke
 * Date              : Fri 8 Feb 2019
 */
#include <stdio.h>
#include <tclDecls.h>


int main(int args, char *argv[]) {
    printf("%s", argv[0]);
    return 0;
}
