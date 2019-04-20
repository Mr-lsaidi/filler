/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:44:32 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:44:33 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*tab;
	size_t	i;

	tab = NULL;
	if (size && (tab = (char *)malloc(size)))
	{
		i = 0;
		while (i < size)
		{
			tab[i] = '\0';
			i++;
		}
	}
	return ((void *)tab);
}
