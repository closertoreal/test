#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char uniq(char *s1, int position, int c)
{
	int i;
	i = 0;
	while (i < position)
	{
		if (s1[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char ft_union(char *s1, char *s2)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (uniq(s1, i, s1[i]))
			ft_putchar(s1[i]);
		i++;
	}
	while (s2[j] != '\0')
	{
		if (uniq(s1, i, s2[j]) && uniq(s2, j, s2[j]))
			ft_putchar(s2[j]);
		j++;
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
