/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:45:00 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:45:02 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	car;
	unsigned char	*p;

	p = (unsigned char *)s;
	car = (unsigned char)c;
	while (n--)
	{
		if (*p == car)
			return (p);
		p++;
	}
	return (NULL);
}
