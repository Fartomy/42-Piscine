/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucak <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:08:17 by mucak             #+#    #+#             */
/*   Updated: 2021/10/26 18:08:18 by mucak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if ((col == 1 && row == 1) || (col == 1 && row == y))
				ft_putchar('A');
			else if ((row == 1 && col == x) || (row == y && col == x))
				ft_putchar('C');
			else if ((col <= x && row == 1) || (col == 1 && row <= y))
				ft_putchar('B');
			else if ((col == x && row <= y) || (col <= x && row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
