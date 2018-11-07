#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}


int repeat_alpha(char **argv)
{
	int i;
	int j;
	int times;
	
	i = 0;
	j = 0;
	times = 0;
	
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
		times = argv[1][i] - 64;
		}
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			times = argv[1][i] - 96;
		}
			while (j < times)
			{
				ft_putchar(argv[1][i]);
				j++;
			}
		i++;
		j = 0;
	}
	ft_putchar('\n');
	return (0);
}
		   int main (int argc, char **argv)
		   {
			if (argc != 2)
				ft_putchar('\n');
			   else
				   repeat_alpha(argv);
			   return (0);
		   }
