/**
 * File              : vc_ultimate_div_mod.c
 * Author            : Derrick Park
 * Date              : Tue 31 Jul 21:00:44 2018
 * Last Modified Date: Tue 31 Jul 21:00:44 2018
 * Last Modified By  : Derrick Park
 */

void vc_ultimate_div_mod(int *a, int *b)
{
  int tmp;

  tmp = *a;
  *a /= *b;
  *b = tmp % *b;
}
