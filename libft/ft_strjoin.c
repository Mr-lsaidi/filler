/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:47:34 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:47:35 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	size_t	i;

	buffer = NULL;
	if (s1 && !s2)
		return ((char *)s1);
	else if (s2 && !s1)
		return ((char *)s2);
	if (s1 && s2)
	{
		if ((buffer = (char *)malloc(ft_strlen(s1) + 1 + ft_strlen(s2))))
		{
			i = -1;
			while (s1[++i])
				buffer[i] = s1[i];
			i = -1;
			while (s2[++i])
				buffer[i + ft_strlen(s1)] = s2[i];
			buffer[i + ft_strlen(s1)] = '\0';
		}
	}
	return (buffer);
}
