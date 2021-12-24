/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:41:21 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/10/28 17:35:47 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int b;

	i = 0;
	while(i < (size / 2))
	{
		b = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 -i] = b;
		i++;
	}
}

int main(void)
{
	int nb_ary[] = {1, 2, 3, 4};
	int a_size;
	int z;

	z = 0; // z'yi tanımlama sebebi sayılar tersine çevrildiğinde bir daha printf'te görelim diye tanımlanmıştır.
	a_size = 4;

	ft_rev_int_tab(nb_ary, a_size);
	while(z < a_size)// while'da aynı z sebebinden ötürü tanımlanmıştır. ex07 göreviyle bir alakası yoktur.
	{
		printf("%d ", nb_ary[z]);
		z++;
	}
}
