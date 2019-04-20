/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_infos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:56:14 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/20 13:47:11 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

void		get_info(t_filler *fr)
{
	if (ft_get_next_line(0, &fr->line))
	{
		fr->p_h = ft_atoi(fr->line + 7);
		fr->p_w = ft_atoi(ft_strstr(fr->line + 8, " "));
		free(fr->line);
	}
}

void		get_plat(t_filler *fr)
{
	int		i;
	int		j;

	if (ft_get_next_line(0, &fr->line))
		free(fr->line);
	fr->pla = (char **)malloc(sizeof(char *) * fr->p_h + 1);
	fr->pla[fr->p_h] = 0;
	i = -1;
	while (++i < fr->p_h)
	{
		j = -1;
		ft_get_next_line(0, &fr->line);
		fr->temp = fr->line;
		fr->line = ft_strstr(fr->line, (fr->line + 4));
		fr->pla[i] = (char *)malloc(sizeof(char) * fr->p_w + 1);
		fr->pla[i][fr->p_w] = '\0';
		while (++j < fr->p_w)
			fr->pla[i][j] = fr->line[j];
		free(fr->temp);
	}
}

void		info_token(t_filler *fr)
{
	if (ft_get_next_line(0, &fr->line))
	{
		fr->t_h = ft_atoi(ft_strstr(fr->line, fr->line + 6));
		fr->t_w = ft_atoi(ft_strstr(fr->line + 6, " "));
		free(fr->line);
	}
}

void		get_token(t_filler *fr)
{
	int		i;
	int		j;

	i = -1;
	fr->token = (char **)malloc(sizeof(char *) * fr->t_h + 1);
	fr->token[fr->t_h] = NULL;
	while (++i < fr->t_h)
	{
		j = -1;
		ft_get_next_line(0, &fr->line);
		fr->token[i] = (char *)malloc(sizeof(char *) * fr->t_w + 1);
		fr->token[i][fr->t_w] = '\0';
		while (++j < fr->t_w)
			fr->token[i][j] = fr->line[j];
	}
	free(fr->line);
}
