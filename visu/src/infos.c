/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 12:27:39 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/20 22:31:06 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vis.h"

void	head_info(t_visu *vis)
{
	int i;

	i = -1;
	while (++i < 6)
	{
		ft_get_next_line(0, &vis->line);
		free(vis->line);
	}
}

void	get_players1(t_visu *vis)
{
	int		i;
	char	**tab;

	i = 0;
	ft_get_next_line(0, &vis->line);
	vis->temp = vis->line;
	tab = ft_strsplit(vis->line, '/');
	while (tab[i])
		i++;
	vis->line = tab[i - 1];
	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
	i = 0;
	while (vis->line[i] != '.')
		i++;
	vis->line = ft_strsub(vis->line, 0, i);
	vis->p1 = vis->line;
	free(vis->temp);
}

void	get_players2(t_visu *vis)
{
	int		i;
	char	**tab;

	i = 0;
	ft_get_next_line(0, &vis->line);
	vis->temp = vis->line;
	tab = ft_strsplit(vis->line, '/');
	while (tab[i])
		i++;
	vis->line = tab[i - 1];
	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
	i = 0;
	while (vis->line[i] != '.')
		i++;
	vis->line = ft_strsub(vis->line, 0, i);
	vis->p2 = vis->line;
	free(vis->temp);
}

void	get_platinfo(t_visu *vis)
{
	while (ft_get_next_line(0, &vis->line))
	{
		if (ft_strstr(vis->line, "Plateau"))
			break ;
		free(vis->line);
	}
	vis->p_h = ft_atoi(vis->line + 7);
	vis->p_w = ft_atoi(ft_strstr(vis->line + 8, " "));
}

void	get_plat(t_visu *vis)
{
	int		i;
	int		j;

	if (ft_get_next_line(0, &vis->line))
		free(vis->line);
	vis->plat = (char **)malloc(sizeof(char *) * vis->p_h + 1);
	vis->plat[vis->p_h] = 0;
	i = -1;
	while (++i < vis->p_h)
	{
		j = -1;
		ft_get_next_line(0, &vis->line);
		vis->temp = vis->line;
		vis->line = ft_strstr(vis->line, (vis->line + 4));
		vis->plat[i] = (char *)malloc(sizeof(char) * vis->p_w + 1);
		vis->plat[i][vis->p_w] = '\0';
		while (++j < vis->p_w)
			vis->plat[i][j] = vis->line[j];
		free(vis->temp);
	}
	vis->scor_p1 = 0;
	vis->scor_p2 = 0;
}

void	retsult(t_visu *vis)
{
	vis->temp = vis->line;
	vis->line = ft_strstr(vis->line, "fin:") + 5;
	vis->result_p1 = ft_atoi(vis->line);
	free(vis->temp);
	ft_get_next_line(0, &vis->line);
	vis->temp = vis->line;
	vis->line = ft_strstr(vis->line, "fin:") + 5;
	vis->result_p2 = ft_atoi(vis->line);
	free(vis->temp);
}

int		skip(t_visu *vis)
{
	while (ft_get_next_line(0, &vis->line))
	{
		if (ft_strstr(vis->line, "Plateau"))
			return (1);
		if (ft_strstr(vis->line, "=="))
		{
			retsult(vis);
			return (2);
		}
		free(vis->line);
	}
	free(vis->line);
	return (0);
}
