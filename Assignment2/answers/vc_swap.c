/**
 * File              : vc_swap.c
 * Author            : Derrick Park
 * Date              : Tue 31 Jul 20:52:00 2018
 * Last Modified Date: Tue 31 Jul 20:52:00 2018
 * Last Modified By  : Derrick Park
 */

void vc_swap(int *a, int *b)
{
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
