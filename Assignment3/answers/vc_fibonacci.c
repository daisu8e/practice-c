/**
 * File              : vc_fibonacci.c
 * Author            : Derrick Park
 * Date              : Mon  6 Aug 11:50:53 2018
 * Last Modified Date: Mon  6 Aug 11:50:53 2018
 * Last Modified By  : Derrick Park
 */

int vc_fibonacci(int n)
{
  if (n < 0) return -1;
  if (n == 0) return 0;
  if (n == 1) return 1;
  return vc_fibonacci(n - 1) + vc_fibonacci(n - 2);
}
