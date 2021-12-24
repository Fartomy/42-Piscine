/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 23:25:20 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/08 23:41:05 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	f_pchar(char *str)
{
	int i;

	i = 0;
	while(*str)
	{
		write(1, str++, 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	while(i < ac)
	{
		f_pchar(av[ac - 1]);
		write(1, "\n", 1);
		ac--;
	}

}
