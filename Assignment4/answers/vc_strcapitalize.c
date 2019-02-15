/**
 * File              : vc_strcapitalize.c
 * Author            : Derrick Park
 * Date              : Wed  8 Aug 23:17:26 2018
 * Last Modified Date: Wed  8 Aug 23:17:26 2018
 * Last Modified By  : Derrick Park
 */

char *vc_strcapitalize(char *str)
{
	int i;
	int upper;

	i = 0;
	upper = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (upper && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			upper = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);
}
