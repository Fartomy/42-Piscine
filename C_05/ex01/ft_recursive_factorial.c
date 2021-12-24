/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:27:48 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/06 13:48:54 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return(0);
	else if(nb == 1)
		return(1);

	return(nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
	printf("%d", ft_recursive_factorial(3));
}
