#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int j;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;

	while (str[i] >= 0 && str[i] <= 32)
		{
			i++;
		}
	if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
	while (str[i] >= 48 && str[i] <= 57)
		{
			nb = nb * 10 + str[i] - 48;
			i++;
		}
	return (sign * nb);
}

int main (void)
{
	char a[] = "   sdfsdft -5234AAAgreghrsth";
	printf("%d\n", atoi(a));
	printf("%d\n", ft_atoi(a));
	return (0);
}
//
//
//#include <stdio.h> //
//
//int		ft_atoi(char *s)
//{
//	int		sign;
//	long	r;
//
//	r = 0;
//	sign = 1;
//	while (*s == 32 || (*s >= 9 && *s <= 13))
//		s++;
//	if (*s == '-')
//	{
//		sign = -1;
//		s++;
//	}
//	if (*s == '+')
//		s++;
//	while (*s >= '0' && *s <= '9')
//	{
//		r = r * 10 + *s - '0';
//		s++;
//	}
//	return (sign * (int)r);
//}
//
//int		main(void)//
//{//
//	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";// -5234
//	printf("%d\n",ft_atoi(a));
//	printf("%d\n", atoi(a));
//}//

