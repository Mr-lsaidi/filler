/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strns.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:48:54 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:48:56 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strns(char const *s, char c)
{
	int		i;
	int		number;

	i = 0;
	number = 0;
	while (s[i + 1])
	{
		if (s[i] != c && s[i + 1] == c)
			number++;
		i++;
	}
	if (s[i] != c)
		number++;
	return (number);
}
