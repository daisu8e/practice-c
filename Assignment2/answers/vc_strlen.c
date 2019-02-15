/**
 * File              : vc_strlen.c
 * Author            : Derrick Park
 * Date              : Tue 31 Jul 21:09:04 2018
 * Last Modified Date: Tue 31 Jul 21:09:04 2018
 * Last Modified By  : Derrick Park
 */

int vc_strlen(char *str)
{
  int i;

  i = 0;
  while (*str++ != '\0')
    i++;
  return i;
}
