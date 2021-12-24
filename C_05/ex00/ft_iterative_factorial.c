/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:00:15 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/06 13:44:52 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int tmp;

	tmp = 1;
	if (nb < 0)
		return (0);

	else if (nb == 1)
		return (1);

	while (nb > 1)
	{
		tmp *= nb;
		nb--;
	}

	return(tmp);
}

int main(void)
{
	printf("%d", ft_iterative_factorial(2));
}
