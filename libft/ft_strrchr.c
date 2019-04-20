/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:49:05 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:49:06 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	char		*k;

	k = NULL;
	i = 0;
	if (str[i] == c)
	{
		k = (char *)&str[i];
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			k = (char *)&str[i];
		i++;
	}
	if (k)
		return (k);
	if (c == '\0')
		return ((char *)(&str[i]));
	return (NULL);
}
