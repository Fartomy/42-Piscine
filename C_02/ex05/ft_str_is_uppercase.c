/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:08:06 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/10/31 12:34:35 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	w;

	w = 0;
	while (str[w] != '\0')
	{
		if (str[w] < 'A' || str[w] > 'Z')
			return (0);
		w++;
	}
	return (1);
}