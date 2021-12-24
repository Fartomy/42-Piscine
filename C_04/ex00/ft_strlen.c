/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:44:07 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/02 20:48:44 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int d;

	d = 0;

	while(str[d] != '\0')
	{
		d++;
	}
	return (d);
}

int	main(void)
{
	char dizi[] = "merhaba";

	printf("%d", ft_strlen(dizi));
}
