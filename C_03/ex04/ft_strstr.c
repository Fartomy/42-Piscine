/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:56:16 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/03 14:36:40 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		x = 0;
		while (to_find[x] != '\0')
		{
			if (str[i + x] == to_find[x])
			{
				x++;
			}
			else
				break ;
		}
		if (to_find[x] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
