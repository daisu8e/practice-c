/**
 * File              : vc_recursive_factorial.c
 * Author            : Derrick Park
 * Date              : Mon  6 Aug 11:35:13 2018
 * Last Modified Date: Mon  6 Aug 11:35:13 2018
 * Last Modified By  : Derrick Park
 */

int vc_recursive_factorial(int n)
{
  if (n < 0)
    return 0;
  if (n == 1 || n == 0)
    return 1;
  return n * vc_recursive_factorial(n - 1);
}
