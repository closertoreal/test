#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;
	i = 0;
	
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i;
	i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char wdmatch(char *s1, char *s2)
{
	int i;
	int j;
	int n;
	int len;
	
	len = ft_strlen(s1);
	printf("len %d\n", len);
	n = 0;
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		printf("i %d\n", i);
		while (s2[j] != '\0')
		{
			printf("j %d\n", j);
			if (s1[i] == s2[j])
			{
				n++;
				printf("n %d\n", n);
				j++;
				break;
			}
			
			j++;
			
			
		}
		i++;
		
	}
	if (n == len)
	{
		printf("%s\n", s1);
	}
		return (0);
}

int main(int argc, char ** argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		wdmatch(argv[1], argv[2]);
	return (0);
}








