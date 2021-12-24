#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main(int ac, char **av)
{
	int len;

	if(ac == 2)
	{
		len = ft_strlen(av[1]);
		while(len--)
		{
			write(1, &av[1][len], 1);
		}
	}
	write(1, "\n", 1);
}
