#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int index = 0;

	while(s2[index] != '\0')
	{
		s1[index] = s2[index];
		index++;
	}
	s1[index] = '\0';
	return (s1);
}

int main(void)
{
	char d1[] = "sds";
	char d2[] = "12345";

	printf("%s", ft_strcpy(d1, d2));
}

