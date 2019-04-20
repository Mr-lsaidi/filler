/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:47:51 by ebatchas          #+#    #+#             */
/*   Updated: 2019/04/17 14:49:37 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	dest = NULL;
	if (s)
	{
		if ((dest = (char *)malloc((len + 1))))
		{
			i = 0;
			while (i < len && s[i])
			{
				dest[i] = s[i + start];
				i++;
			}
			dest[i] = '\0';
		}
	}
	return (dest);
}
