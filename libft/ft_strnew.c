/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:48:49 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:48:50 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;
	size_t	i;

	tab = NULL;
	if ((tab = (char *)malloc(1 + size)))
	{
		i = 0;
		while (i < size + 1)
		{
			tab[i] = '\0';
			i++;
		}
	}
	return (tab);
}
