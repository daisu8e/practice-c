/**
 * File              : vc_sqrt.c
 * Author            : Derrick Park
 * Date              : Mon  6 Aug 11:52:39 2018
 * Last Modified Date: Mon  6 Aug 11:52:39 2018
 * Last Modified By  : Derrick Park
 */

// Newton's method
static float absolute(float num)
{
  if (num < 0)
    num = -num;
  return num;
}

float vc_sqrt(int x)
{
  const float diff = 0.00001;
  float guess = 1.0;
  /* while (absolute(guess * guess - x) >= diff) */
  while (absolute(guess * guess / x - 1.0) >= diff)
  {
    guess = (x / guess + guess) / 2.0;
  }
  return guess;
}

int vc_sqrt1(int n)
{
  int sqr;

  sqr = 1;
  while ((sqr * sqr) < n)
    sqr += 1;
  if ((sqr * sqr) == n)
    return sqr;
  return 0;
}
