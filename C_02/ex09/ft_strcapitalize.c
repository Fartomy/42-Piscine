/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:37:24 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/09 02:46:46 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	p;

	a = 0;
	p = 0;
	while (str[a] != '\0')
	{
		if (p == 0 && str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] -= 32;
			p++;
		}
		else if (p > 0 && (str[a] >= 'A' && str[a] <= 'Z'))
			str[a] += 32;
		else if(str[a] < '0' || (str[a] > '9' && str[a] < 'A') \
				|| (str[a] > 'Z' && str[a] < 'a') || (str[a] > 'z'))
			p = 0;
		else
			p++;
		a++;
	}
	return (str);
}

int main(void)
{
	char d[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(d));
}
