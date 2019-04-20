/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:45:27 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:45:28 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(const void *tampon, int caractere, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)tampon;
	while (i < n)
	{
		p[i] = caractere;
		i++;
	}
	return ((void *)p);
}
