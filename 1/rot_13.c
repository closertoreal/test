#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char rot_13(char *s1)
{
	int i;
	i = 0;
	
	while (s1[i] != '\0')
	{
		if ((s1[i] >= 'A' && s1[i] <= 'M') || (s1[i] >= 'a' && s1[i] <= 'm'))
			ft_putchar(s1[i] + 13);
		else if ((s1[i] >= 'n' && s1[i] <= 'z') || (s1[i] >= 'N' && s1[i] <= 'Z'))
			ft_putchar(s1[i] - 13);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		rot_13(argv[1]);
	return (0);
	
}
