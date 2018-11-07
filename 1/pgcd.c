#include <stdio.h>
#include <stdlib.h>

void	pgcd(int nb1, int nb2)
{
	int div;
	int pgcd;
	
	div = 1;
	if (nb1 <= 0 || nb2 <= 0)
		return ;
	while (div <= nb1 || div <= nb2)
	{
		if (nb1 % div == 0 && nb2 % div == 0)
			pgcd = div;
		div++;
	}
	printf("%d", pgcd);
}

int		main(int argc, char **argv)
{
	int x;
	int y;
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if (argc == 3)
		pgcd(x, y);
	printf("\n");
	return (0);
}
