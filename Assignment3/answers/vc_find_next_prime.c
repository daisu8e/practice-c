/**
 * File              : vc_find_next_prime.c
 * Author            : Derrick Park
 * Date              : Mon  6 Aug 12:01:36 2018
 * Last Modified Date: Mon  6 Aug 12:01:36 2018
 * Last Modified By  : Derrick Park
 */

static int vc_is_prime(int n)
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

int vc_find_next_prime(int n)
{
  n += 1;
  while (!vc_is_prime(n))
    n += 1;
  return n;
}
