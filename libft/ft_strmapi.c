/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:47:55 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:47:56 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = NULL;
	if (s)
	{
		if ((res = (char *)malloc((1 + ft_strlen(s)) * sizeof(char))))
		{
			i = 0;
			while (s[i])
			{
				res[i] = (*f)(i, s[i]);
				i++;
			}
			res[i] = '\0';
		}
	}
	return (res);
}
