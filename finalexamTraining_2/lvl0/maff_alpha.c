#include <unistd.h>

int main(void)
{
	int i;

	i = 0;
	char c[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";

	while(c[i] != '\0')
	{
		if(c[i] % 2 == 0)
			c[i] -= 32;

		else if(c[i] % 2 != 0)
			c[i] += 32;

		write(1, &c[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}
