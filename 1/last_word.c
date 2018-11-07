#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		last_word(char **argv)
{
	int		i;
	
	i = 0;
	while (argv[1][i] != '\0')
	{
		i++;
	}
	if (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t')
	{
	while (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t')
		{
		i--;
		}
	}
	while (argv[1][i - 1] != ' ')
	{
		i--;
	}
	while (argv[1][i] != ' ')
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else 
		last_word(argv);
	return (0);
}

	
