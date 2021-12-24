#include <stdio.h>

char 	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;

	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

int main(void)
{
	char dz1[] = "";
	char dz2[] = "se";

	printf("Önce ki: %s\n" "\n", dz1);

	ft_strcpy(dz1, dz2);

	printf("Sonra ki: %s\n", dz1);
}
