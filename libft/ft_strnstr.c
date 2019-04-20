/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:48:59 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:49:01 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	while (i < len && str[i] != '\0')
	{
		j = 0;
		temp = i;
		while (i < len && find[j] && str[i] == find[j])
		{
			i++;
			j++;
		}
		if (j == ft_strlen(find))
			return (char *)(&str[temp]);
		i = temp + 1;
	}
	if (*str == '\0' && *str == *find)
		return ((char *)str);
	return (NULL);
}
