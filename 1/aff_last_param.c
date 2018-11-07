#include <unistd.h>
#include <stdlib.h>
void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;
	int result;
	result = 0;
	i = 0;
	
	while (str[i] != '\0')
	{
		result++;
		i++;
	}
	return(result);
}

int		aff_first_param(int argc, char **argv)
{
	int i;
	
	
	i = 0;
	
	
	while (argv[argc - 1][i] != '\0')
	{
		ft_putchar(argv[argc - 1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putchar('\n');
	else
		aff_first_param(argc, argv);
	return (0);
}
