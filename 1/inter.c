#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char repeat(char *s1, char *s2, int position, int c)
{
	int i;
	i = 0;
	while (i < position)
	{
		if (s1[i] == c)
			return (0);
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char ft_union(char *s1, char *s2)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (repeat(s1, s2, i, s1[i]))
			ft_putchar(s1[i]);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		ft_union(argv[1], argv[2]);
	return (0);
}
