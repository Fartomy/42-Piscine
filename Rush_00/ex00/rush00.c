/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerturk <aerturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:54:47 by aerturk           #+#    #+#             */
/*   Updated: 2021/10/26 18:06:18 by mucak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && row == 1) || (col == x && row == 1))
				ft_putchar('o');
			else if ((row == y && col == 1) || (row == y && col == x))
				ft_putchar('o');
			else if ((col <= x && row == 1) || (col <= x && row == y))
				ft_putchar('-');
			else if ((col == 1 && row <= y) || (col == x && row <= y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
