/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:26:25 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/10/27 18:13:30 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		putchar(*str);
		str++;
	}
}

int main(void)
{
	char arry_c[] = "lazerhawk overdrive is a nice electro music";
	char *ptr_c;

	ptr_c = arry_c;

	ft_putstr(ptr_c);
}
