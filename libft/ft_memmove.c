/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:45:22 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:45:23 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*q;
	char	*temp;

	q = (char *)src;
	p = (char *)dest;
	if ((temp = (char *)malloc(sizeof(char) * n)))
	{
		i = 0;
		while (i < n)
		{
			temp[i] = q[i];
			i++;
		}
		i = 0;
		while (i < n)
		{
			p[i] = temp[i];
			i++;
		}
	}
	return (dest);
}
