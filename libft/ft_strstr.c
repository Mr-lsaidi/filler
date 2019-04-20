/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:49:19 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:49:27 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *find)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		temp = i;
		while (find[j] && str[i] == find[j])
		{
			i++;
			j++;
		}
		if (j == ft_strlen(find))
			return (char *)(&str[temp]);
		i = temp + 1;
	}
	if (*find == *str && *str == '\0')
		return ((char *)str);
	return (NULL);
}
