/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:47:50 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:47:51 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	size_t	i;

	res = NULL;
	if (s)
	{
		if ((res = (char *)malloc(sizeof(char) * (1 + ft_strlen(s)))))
		{
			i = 0;
			while (s[i])
			{
				res[i] = (*f)(s[i]);
				i++;
			}
			res[i] = '\0';
		}
	}
	return (res);
}
