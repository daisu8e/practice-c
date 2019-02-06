/**
 * File              : vc_print_comb2.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 05 Feb 2019
 */

#include <stdio.h>

void vc_print_comb2() {
	int isFirst = 1;
	int value1 = -1;
	int value2 = -1;
	for (char a = '0'; a <= '9'; a++) {
		for (char b = '0'; b <= '9'; b++) {
			value1 += 1;
			for (char c = '0'; c <= '9'; c++) {
				for (char d = '0'; d <= '9'; d++) {
					value2 += 1;
					if (value2 > value1) {
						if (isFirst) {
							isFirst = 0;
						}
						else {
							putchar(' ');
						}
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						putchar(',');

						if (value2 > 98) {
							value2 = -1;
						}
					}
				}
			}
		}
	}
}