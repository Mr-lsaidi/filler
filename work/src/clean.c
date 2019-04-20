/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:04:17 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/20 13:47:08 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

void	del_hmap(t_filler *flr)
{
	int i;

	i = -1;
	while (++i < flr->p_h)
		free(flr->h_map[i]);
	free(flr->h_map);
}

void	del_plat(t_filler *flr)
{
	int i;

	i = -1;
	while (++i < flr->p_h)
		free(flr->pla[i]);
	free(flr->pla);
	i = -1;
	while (++i < flr->t_h)
		free(flr->token[i]);
	free(flr->token);
}
