/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:09:32 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/10/27 16:33:20 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a,	int b, int *div, int *mod)
{
	*div = a / b;

	*mod = a % b;
}

int main(void)
{
	int x;
	int y;
	int ptr_x;
	int ptr_y;

	x = 10;
	y = 2;

	ft_div_mod(x, y, &ptr_x, &ptr_y);

	printf("Bölümü: %d\n", ptr_x);
	printf("Bölümünden kalan: %d", ptr_y);
}
