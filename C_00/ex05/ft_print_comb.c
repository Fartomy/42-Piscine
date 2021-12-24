/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:50:14 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/10/21 15:28:36 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnmbr(char h, char t, char o)
{
	write(1, &h, 1);
	write(1, &t, 1);
	write(1, &o, 1);
	if (h != '7' || t != '8' || o != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	h_dgt;
	char	t_dgt;
	char	o_dgt;

	h_dgt = '0';
	while (h_dgt <= '7')
	{
		t_dgt = h_dgt + 1;
		while (t_dgt <= '8')
		{
			o_dgt = t_dgt + 1;
			while (o_dgt <= '9')
			{
				ft_putnmbr(h_dgt, t_dgt, o_dgt);
				o_dgt++;
			}
			t_dgt++;
		}
		h_dgt++;
	}
}
