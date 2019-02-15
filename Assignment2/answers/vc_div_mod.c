/**
 * File              : vc_div_mod.c
 * Author            : Derrick Park
 * Date              : Tue 31 Jul 20:55:57 2018
 * Last Modified Date: Tue 31 Jul 20:55:57 2018
 * Last Modified By  : Derrick Park
 */

void vc_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
}
