/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:39:57 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/06 13:53:07 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int c;

	c = 1;
	if(nb == 0 && power == 0)
		return (1);

	else if (power < 0)
		return (0);

	while (power >= 1)
	{
		c *= nb;
		power--;
	}
	return(c);
}

int main(void)
{
	printf("%d", ft_iterative_power(5, 2));
}
