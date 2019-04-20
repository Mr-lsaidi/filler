/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:47:40 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:47:41 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	max;
	size_t	j;

	j = 0;
	max = size;
	while (max-- && dest[j])
		j++;
	max = size - j;
	if (max == 0)
		return (j + ft_strlen(src));
	i = 0;
	while (src[i])
	{
		if (i < max - 1)
		{
			dest[j + i] = src[i];
			size = i;
		}
		i++;
	}
	dest[j + size + 1] = '\0';
	return (j + i);
}
