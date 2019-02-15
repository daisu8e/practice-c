/**
 * File              : vc_iterative_power.c
 * Author            : Derrick Park
 * Date              : Mon  6 Aug 11:46:03 2018
 * Last Modified Date: Mon  6 Aug 11:46:03 2018
 * Last Modified By  : Derrick Park
 */

int vc_iterative_power(int n, int power)
{
  int result;

  result = 1;
  if (power < 0)
    return 0;
  while (power--)
    result *= n;
  return result;
}
