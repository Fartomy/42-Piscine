/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerturk <aerturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:54:35 by aerturk           #+#    #+#             */
/*   Updated: 2021/10/26 18:08:45 by mucak            ###   ########.fr       */
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
			if ((col == 1 && row == 1) || (col == x && row == y))
				ft_putchar('A');
			else if ((row == 1 && col == y) || (row == y && col == 1))
				ft_putchar('C');
			else if ((col <= x && row == 1) || (col <= x && row == y))
				ft_putchar('B');
			else if ((col == 1 && row <= y) || (col == x && row <= y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
