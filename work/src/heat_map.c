/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heat_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:02:27 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/20 13:47:18 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

void		init_h_map(t_filler *fr)
{
	int		i;
	int		j;

	fr->h_map = (int **)malloc(sizeof(int *) * fr->p_h);
	i = -1;
	while (++i < fr->p_h)
	{
		j = -1;
		fr->h_map[i] = (int *)malloc(sizeof(int) * fr->p_w);
		while (++j < fr->p_w)
		{
			if (fr->pla[i][j] == fr->me)
				fr->h_map[i][j] = fr->v_me;
			if (fr->pla[i][j] == fr->enme)
				fr->h_map[i][j] = fr->v_enme;
			if (fr->pla[i][j] == '.')
				fr->h_map[i][j] = 0;
		}
	}
}

void		check_first(t_filler *fr, int i, int j)
{
	if (i - 1 >= 0 && j - 1 >= 0 &&
		fr->h_map[i - 1][j - 1] == 0)
		fr->h_map[i - 1][j - 1] = 1;
	if (i - 1 >= 0 && fr->h_map[i - 1][j] == 0)
		fr->h_map[i - 1][j] = 1;
	if (i - 1 >= 0 && j + 1 < fr->p_w &&
		fr->h_map[i - 1][j + 1] == 0)
		fr->h_map[i - 1][j + 1] = 1;
	if (j - 1 >= 0 && fr->h_map[i][j - 1] == 0)
		fr->h_map[i][j - 1] = 1;
	if (j + 1 < fr->p_w && fr->h_map[i][j + 1] == 0)
		fr->h_map[i][j + 1] = 1;
	if (i + 1 < fr->p_h && j - 1 >= 0 &&
		fr->h_map[i + 1][j - 1] == 0)
		fr->h_map[i + 1][j - 1] = 1;
	if (i + 1 < fr->p_h && fr->h_map[i + 1][j] == 0)
		fr->h_map[i + 1][j] = 1;
	if (i + 1 < fr->p_h && j + 1 < fr->p_w &&
		fr->h_map[i + 1][j + 1] == 0)
		fr->h_map[i + 1][j + 1] = 1;
}

void		insert_init(t_filler *fr)
{
	int		i;
	int		j;

	i = -1;
	while (++i < fr->p_h)
	{
		j = -1;
		while (++j < fr->p_w)
		{
			if (fr->h_map[i][j] == fr->v_enme)
				check_first(fr, i, j);
		}
	}
}

void		check_sec(t_filler *fr, int i, int j, int k)
{
	if (i - 1 >= 0 && j - 1 >= 0 &&
		fr->h_map[i - 1][j - 1] == k)
		fr->h_map[i][j] = k + 1;
	if (i - 1 >= 0 && fr->h_map[i - 1][j] == k)
		fr->h_map[i][j] = k + 1;
	if (i - 1 >= 0 && j + 1 < fr->p_w &&
		fr->h_map[i - 1][j + 1] == k)
		fr->h_map[i][j] = k + 1;
	if (j - 1 >= 0 && fr->h_map[i][j - 1] == k)
		fr->h_map[i][j] = k + 1;
	if (j + 1 < fr->p_w && fr->h_map[i][j + 1] == k)
		fr->h_map[i][j] = k + 1;
	if (i + 1 < fr->p_h && j - 1 >= 0 &&
		fr->h_map[i + 1][j - 1] == k)
		fr->h_map[i][j] = k + 1;
	if (i + 1 < fr->p_h && fr->h_map[i + 1][j] == k)
		fr->h_map[i][j] = k + 1;
	if (i + 1 < fr->p_h && j + 1 < fr->p_w &&
		fr->h_map[i + 1][j + 1] == k)
		fr->h_map[i][j] = k + 1;
}

void		insert(t_filler *fr)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	while (++k < fr->p_w)
	{
		i = -1;
		while (++i < fr->p_h)
		{
			j = -1;
			while (++j < fr->p_w)
			{
				if (fr->h_map[i][j] == 0)
					check_sec(fr, i, j, k);
			}
		}
	}
}
