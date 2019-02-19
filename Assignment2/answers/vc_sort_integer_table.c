/**
 * File              : vc_sort_integer_table.c
 * Author            : Derrick Park
 * Date              : Thu  2 Aug 22:29:18 2018
 * Last Modified Date: Thu  2 Aug 22:29:18 2018
 * Last Modified By  : Derrick Park
 */

void vc_swap(int *x, int *y)
{
  int temp;
  
  temp = *x;
  *x = *y;
  *y = temp;
}

void vc_sort_integer_table(int *tab, int size)
{
  int i;
  int j;
  int min;

  for (i = 0; i < size - 1; i++)
  {
    min = i;
    for (j = i + 1; j < size; j++)
    {
      if (tab[j] < tab[min])
        min = j;
    }
    vc_swap(&tab[i], &tab[min]);
  }
}
