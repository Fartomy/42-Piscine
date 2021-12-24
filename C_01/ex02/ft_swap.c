/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:10:08 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/10/27 15:26:44 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		change;
	int		change2;

	change = *b;
	*b = *a; 
   	*a = change;	
}

int main(void)
{
	int sayia;
	int sayib;

	sayia = 10;
	sayib = 22;

	printf("Önce ki sayi a %d\n", sayia);
	printf("Önce ki sayi b %d\n", sayib);

	ft_swap(&sayia, &sayib);

	printf("Sonra ki sayi a %d\n", sayia);
	printf("Sonra ki sayi b %d", sayib);
}
