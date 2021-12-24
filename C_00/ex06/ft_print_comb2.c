/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:57:47 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/10/21 21:54:17 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	func_putchar(char wrt)
{
	write(1, &wrt, 1);
}

void	ft_print_comb2(void)
{
	int		frs_group;
	int		scnd_group;

	frs_group = 0;
	while (frs_group <= 98)
	{
		scnd_group = frs_group + 1;
		while (scnd_group <= 99)
		{
			func_putchar('0' + (frs_group / 10));
			func_putchar('0' + (frs_group % 10));
			func_putchar(' ');
			func_putchar('0' + (scnd_group / 10));
			func_putchar('0' + (scnd_group % 10));
			if (frs_group != 98)
			{
				func_putchar(',');
				func_putchar(' ');
			}
			scnd_group++;
		}
		frs_group++;
	}
}
