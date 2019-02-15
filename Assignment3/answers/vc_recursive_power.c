/**
 * File              : vc_recursive_power.c
 * Author            : Derrick Park
 * Date              : Mon  6 Aug 11:48:54 2018
 * Last Modified Date: Mon  6 Aug 11:48:54 2018
 * Last Modified By  : Derrick Park
 */

int vc_recursive_power(int n, int power)
{
  if (!n || power < 0)
    return 0;
  if (!power)
    return 1;
  return n * vc_recursive_power(n, power - 1);
}
