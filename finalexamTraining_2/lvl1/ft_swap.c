#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int main(void)
{
	int a;
	int b;

	a = 124;
	b = 3;

	printf("Önce ki a: %d\n", a);
	printf("Önce ki b: %d\n", b);

	ft_swap(&a, &b);
	printf("\n");

	printf("Sonra ki: %d\n", a);
	printf("Sonra ki: %d\n", b);
}*/
