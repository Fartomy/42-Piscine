#include <unistd.h>

int main(void)
{
	int i;

	i = 0;
	char c[] = "Hello World!";

	while(c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
