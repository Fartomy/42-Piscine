/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:47:17 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/10/27 17:24:32 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}

int main(void)
{
	int m = 10, z = 2;

	ft_ultimate_div_mod (&m, &z);

	printf("Bölümü: %d\n", m);
	printf("Bölmünden kalan: %d", z);
}
