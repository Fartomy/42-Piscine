#include <unistd.h>

void ft_count(int nb)
{
	if(nb > 9)
		ft_count(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int main(void)
{
	int a;

	a = 1;

	while(a <= 100)
	{
		if(a % 3 == 0 && a % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(a % 5 == 0)
			write(1, "buzz", 4);
		else if(a % 3 == 0)
			write(1, "fizz", 4);
		else
			ft_count(a);
		write(1, "\n", 2);
		a++;
	}
}
