/**
 * File              : vc_sort_int_table.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Thursday Feb 07 2019
 */
#include <stdio.h>

static void swapNumbers(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void vc_sort_int_table(int *tab, int size) {
	int swapped;
	do {
		swapped = 0;
		for (int i = 1; i < size; i++) {
			if (tab[i - 1] > tab[i]) {
				swapNumbers(&(tab[i - 1]), &(tab[i]));
				swapped = 1;
			}
		}
	} while (swapped);
}



int main()
{

	int list[] = { 5, 8, 9,2, 1 };

	vc_sortint_table(list, 5);

	for (int i = 0; i < 5; i++) {
		printf("%d", list[i]);
	}
	return 0;
}
