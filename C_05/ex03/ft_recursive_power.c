/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:31 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/05 15:01:46 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power <= 0 || nb == 0)		
		return (1);
	return(nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
	printf("%d", ft_recursive_power(2, 3));
	return (0);
}
