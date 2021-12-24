/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:18:39 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/06 18:08:30 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}
int main(int argn, char **argi)
{
	if (argn > 0)
	{
		ft_putchar(argi[0]);
	}
	write(1, "\n", 1);
	return(0);
}
