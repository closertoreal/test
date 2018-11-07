#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int search_and_replace(char **argv)
{
	int		i;
	i = 0;

	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0];
		}
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4 || argv[2][1] != '\0' || argv[3][1])
	{
		ft_putchar('\n');
	}
	else 
		search_and_replace(argv);
	return (0);
}
