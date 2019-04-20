/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:49:10 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:49:11 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check_init(char ***tab, char const **str, int *i, int *j)
{
	*i = 0;
	*j = 0;
	*tab = NULL;
	return ((*str) ? (1) : (0));
}

char			**ft_strsplit(char const *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (ft_check_init(&tab, &str, &i, &k))
	{
		if ((tab = (char **)malloc(sizeof(char *) * (1 + ft_strns(str, c)))))
		{
			while (str[i] && k < ft_strns(str, c))
			{
				if ((tab[k] = (char *)malloc(255)))
				{
					j = 0;
					while (str[i] && str[i] != c)
						tab[k][j++] = str[i++];
					if (j)
						tab[k++][j] = '\0';
				}
				i++;
			}
			tab[k] = 0;
		}
	}
	return (tab);
}
