/* ************************************ */
/*                                      */
/* vc_print_combn.c                     */
/*                                      */
/* By: Derrick                          */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

static void	vc_helper(int *arr, int col, int n)
{
	int	i;

	while (col)
	{
		while (arr[col] == (9 + col - (n - 1)) && col >= 0)
			col--;
		if (col < 0) break;
		arr[col]++;
		i = col;
		while (i++ < n)
			arr[i] = arr[i - 1] + 1;
		putchar(',');
		putchar(' ');
		i = 0;
		while (i < n)
			putchar(arr[i++] + '0');
		col = n - 1;
	}
}

void vc_print_combn(int n)
{
	int	 arr[n];
	int	 i;
	int	 col;
  char ch;

	col = n - 1;
	if (n < 1 || n > 9) return;
  if (n == 1)
  {
    for (ch = '0'; ch <= '8'; ch++)
    {
      putchar(ch);
      putchar(',');
      putchar(' ');
    }
    putchar('9');
    return;
  }
	i = -1;
	while (i++ < n)
		arr[i] = i;
	i = 0;
	while (i < n)
    putchar(arr[i++] + '0');
  vc_helper(arr, col, n);
}

int main(int argc, char **argv)
{
  if (argc > 1)
    vc_print_combn(atoi(argv[1]));
  return 0;
}
