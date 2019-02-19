/**
 * File              : vc_is_prime.c
 * Author            : Derrick Park
 * Date              : Mon  6 Aug 11:54:54 2018
 * Last Modified Date: Mon  6 Aug 11:54:54 2018
 * Last Modified By  : Derrick Park
 */

int vc_is_prime(int n)
{
  int i;

  i = 2;
  if (n <= 1)
    return 0;
  while (i <= (n / 2))
  {
    if (!(n % i))
      return 0;
    i++;
  }
  return 1;
}
