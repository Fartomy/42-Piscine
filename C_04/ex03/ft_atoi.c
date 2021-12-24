/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:40:53 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/04 12:31:52 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int m;
	int nm;
    int tmp;

	nm = 1;
	m = 0;
    tmp = 0;
	while (str[m] == ' ' || str[m] == 127 || str[m] < 32)
		m++;

	while (str[m] == '+' || str[m] == '-')
	{
        if (str[m] == '-')
        {
            nm *= -1;
        }
		m++;
	}
    while (str[m] >= '0' && str[m] <= '9')
    {
        tmp = (str[m] - '0') + (tmp * 10);
        m++;
    }
	return(tmp * nm);
}
int main (void)
{
	char d1[] = "     ---+";

	printf("%d", ft_atoi(d1));
}
