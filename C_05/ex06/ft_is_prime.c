/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:41:16 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/06 15:13:58 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int x;

	x = 2;

	if (nb == 1 || nb == 0)
		return (0);

	while (x <= nb / 2)
	{
		if(nb % x == 0)
			return(0);
		x++;
	}
	return (1);
}

int main(void)
{
	printf("%d", ft_is_prime(7));
	return(0);
}
