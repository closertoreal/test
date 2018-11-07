#include <unistd.h>
#include <stdlib.h>
void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int    aff_a(char **argv)
{
	int i;
	i = 0;
//	if (argv[1][0] != 0)
//	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				ft_putchar('a');
				ft_putchar('\n');
								return 0;
			}
			
			i++;
		}
		ft_putchar('\n');
//	}
	return (0);
}

int main(int ac, char **argv)
{
	if(ac != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
		aff_a(argv);
	return (0);
}
