/**
 * File              : vc_iterative_factorial.c
 * Author            : Derrick Park
 * Date              : Mon  6 Aug 11:30:26 2018
 * Last Modified Date: Mon  6 Aug 11:30:26 2018
 * Last Modified By  : Derrick Park
 */

int vc_iterative_factorial(int n)
{
  int result;
  int i;

  result = 1;
  if (n < 0) return 0;
  if (n == 1 || n == 0) return 1;
  for (i = 1; i <= n; i++)
    result *= i;
  return result;
}
