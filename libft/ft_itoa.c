/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:42:03 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:42:05 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_nbrlen(int n)
{
	int		i;

	i = (n > 0) ? 0 : 1;
	n = (n > 0) ? n : (-n);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static	int		ft_power(int n, int puiss)
{
	if (puiss >= 0)
	{
		if (puiss == 0)
			return (1);
		else if (puiss == 1)
			return (n);
		else
			return (n * ft_power(n, puiss - 1));
	}
	return (0);
}

char			*ft_itoa(int n)
{
	char	*tab;
	int		i;
	int		k;

	if (n == -2147483648)
		return (tab = ft_strdup("-2147483648"));
	tab = NULL;
	if ((tab = (char *)malloc(sizeof(char) * (1 + ft_nbrlen(n)))))
	{
		i = 0;
		if (n < 0)
			tab[i++] = '-';
		k = ft_nbrlen(n) - i;
		n = (n > 0) ? n : (-n);
		while (k)
		{
			tab[i++] = n / ft_power(10, k - 1) + '0';
			n -= (n / ft_power(10, k - 1)) * ft_power(10, k - 1);
			k--;
		}
		tab[i] = '\0';
	}
	return (tab);
}
