/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 11:19:05 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/20 13:09:24 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vis.h"

void	del_plat(t_visu *vis)
{
	int i;

	i = -1;
	while (++i < vis->p_h)
		free(vis->plat[i]);
	free(vis->plat);
	i = -1;
}

void	close_sdl(t_visu *vis)
{
	del_plat(vis);
	SDL_DestroyWindow(vis->window);
	TTF_CloseFont(vis->police);
	TTF_Quit();
	SDL_Quit();
}

void	manager_event(t_visu *vis)
{
	int loop;

	loop = 1;
	while (loop)
	{
		SDL_PollEvent(&vis->event);
		if (vis->event.type == SDL_QUIT)
			loop = 0;
	}
}

int		main(void)
{
	t_visu		vis;

	inti_winsur(&vis);
	head_info(&vis);
	get_players1(&vis);
	get_players2(&vis);
	get_platinfo(&vis);
	catlc_init(&vis);
	init_tool(&vis);
	init_color_text(&vis);
	show(&vis);
	vis.divis = vis.p_h * vis.p_w;
	init_percent(&vis);
	start_vis(&vis);
	show_winer(&vis);
	manager_event(&vis);
	close_sdl(&vis);
	return (0);
}
