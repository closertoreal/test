#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int i;
	int j;
	int nb;

	i = 0;
	j = 1;
	nb = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 32)
		{
			i++;
		}
		else if (str[i] == '-')
		{
			nb = -nb;
		}
		else if (str[i] >= 48 && str[i] <= 57)
		{
			nb = str[i] * j + 48;
		}
		i++;
		j*=10;
	}
	return (nb);
}

int main (char *str)
{
	str = "assdf 12312";
	printf("%s\n", atoi(str));
	printf("%s\n", ft_atoi(str));
	return (0);
}