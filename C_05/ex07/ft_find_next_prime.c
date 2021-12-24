/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:27:34 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/06 15:14:28 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int p;

	p = 2;
	if (nb < 2)
		return (0);
	while (p <= nb / 2)
	{
		if (nb % p == 0)
			return (0);
		p++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int k;

	k = 0;
	while (nb < 2147483647 && !ft_is_prime(nb + k))
		k++;
	return(nb + k);
}
int main(void)
{
	printf("%d", ft_find_next_prime(8));
}
