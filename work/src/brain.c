/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:35:02 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/20 13:47:15 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

void	min_xy(t_filler *fr)
{
	int		x;
	int		y;

	fr->m_x = 2147483647;
	fr->m_y = 2147483647;
	x = -1;
	while (++x < fr->t_h)
	{
		y = -1;
		while (++y < fr->t_w)
		{
			if (fr->token[x][y] == '*')
			{
				if (x < fr->m_x)
					fr->m_x = x;
				if (y < fr->m_y)
					fr->m_y = y;
			}
		}
	}
}

int		check_condition(t_filler *fr, int i, int j)
{
	if (fr->token[fr->x][fr->y] == '*' &&
	fr->pla[(fr->x - fr->m_x) + i][(fr->y - fr->m_y) + j] == fr->me)
		fr->stars++;
	if (fr->stars > 1)
		return (0);
	if (fr->token[fr->x][fr->y] == '*' &&
	fr->pla[(fr->x - fr->m_x) + i][(fr->y - fr->m_y) + j] == fr->enme)
		return (0);
	if (fr->token[fr->x][fr->y] == '*' &&
		fr->h_map[(fr->x - fr->m_x) + i][(fr->y - fr->m_y) + j] > 0)
		fr->scor += fr->h_map[(fr->x - fr->m_x) + i][(fr->y - fr->m_y) + j];
	return (1);
}

int		check_tkn(t_filler *fr, int i, int j)
{
	fr->x = -1;
	fr->scor = 0;
	fr->stars = 0;
	while (++fr->x < fr->t_h)
	{
		fr->y = -1;
		while (++fr->y < fr->t_w)
		{
			if (fr->token[fr->x][fr->y] == '*')
			{
				if ((fr->x - fr->m_x) + i < fr->p_h &&
				(fr->y - fr->m_y) + j < fr->p_w)
				{
					if (!check_condition(fr, i, j))
						return (0);
				}
				else
					return (0);
			}
		}
	}
	if (fr->stars == 0)
		return (0);
	return (1);
}

void	place_tkn(t_filler *fr)
{
	int		i;
	int		j;

	i = -1;
	fr->m_x = 0;
	fr->m_y = 0;
	fr->f_scor = 0;
	min_xy(fr);
	while (++i < fr->p_h)
	{
		j = -1;
		while (++j < fr->p_w)
		{
			if (check_tkn(fr, i, j))
			{
				place_condition(fr, i, j);
			}
		}
	}
}

void	place_condition(t_filler *fr, int i, int j)
{
	if (fr->f_scor == 0 && fr->f_scor > 0)
	{
		fr->f_scor = fr->scor;
		fr->b_x = (0 - fr->m_x) + i;
		fr->b_y = (0 - fr->m_y) + j;
	}
	else if ((fr->scor > 0) && (fr->scor < fr->f_scor))
	{
		fr->f_scor = fr->scor;
		fr->b_x = (0 - fr->m_x) + i;
		fr->b_y = (0 - fr->m_y) + j;
	}
	else if (fr->f_scor == 0 && fr->f_scor == 0)
	{
		fr->f_scor = fr->scor;
		fr->b_x = (0 - fr->m_x) + i;
		fr->b_y = (0 - fr->m_y) + j;
	}
}
