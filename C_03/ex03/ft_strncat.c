/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:08:12 by ftekdrmi          #+#    #+#             */
/*   Updated: 2021/11/03 17:46:04 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	f;

	a = 0;
	f = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[f] != '\0' && f < nb)
	{
		dest[a + f] = src[f];
		f++;
	}
	dest[a + f] = '\0';
	return (dest);
}
