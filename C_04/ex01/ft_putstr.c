/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:49:25 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/02 20:53:01 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);

}

void	ft_putstr(char *str)
{
	int q;

	q = 0;

	while(str[q] != '\0')
	{
		ft_putchar(str[q]);
		q++;
	}
}

int main(void)
{
	char dizi[] = "selam ben furkan";

	ft_putstr(dizi);
	return(0);
}
