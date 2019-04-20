/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:20:08 by ebatchas          #+#    #+#             */
/*   Updated: 2019/04/17 14:47:05 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	char	*p;

	dest = NULL;
	if ((dest = (char *)malloc((1 + ft_strlen(str)) * sizeof(char))))
	{
		p = dest;
		while ((*p++ = *str++))
			;
	}
	return (dest);
}
