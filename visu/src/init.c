/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:17:34 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/21 17:59:35 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vis.h"

void	inti_winsur(t_visu *vis)
{
	vis->delay = 0;
	vis->p_h = 0;
	vis->p_w = 0;
	vis->hw = 0;
	vis->i = 0;
	vis->j = 0;
	vis->scor_p1 = 0;
	vis->scor_p2 = 0;
	vis->scor1 = 1;
	vis->scor2 = 1;
	vis->result_p1 = 0;
	vis->result_p2 = 0;
}

int		init_tool(t_visu *vis)
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		return (0);
	if (TTF_Init() == -1)
		return (0);
	if ((vis->window = SDL_CreateWindow("lsaidi", SDL_WINDOWPOS_CENTERED,
	SDL_WINDOWPOS_CENTERED, 1200, vis->width, SDL_WINDOW_OPENGL)) == NULL)
		return (0);
	if ((vis->surf = SDL_GetWindowSurface(vis->window)) == NULL)
		return (0);
	SDL_FillRect(vis->surf, NULL, SDL_MapRGB(vis->surf->format, 45, 49, 66));
	return (1);
}

void	catlc_init(t_visu *vis)
{
	if (vis->p_w <= 17)
	{
		vis->hw = 800 / vis->p_w;
		vis->delay = 30;
		vis->width = 1200;
		vis->higth = 1200;
		vis->ret_higth = 170;
	}
	else if (vis->p_w <= 40)
	{
		vis->hw = 800 / vis->p_w;
		vis->delay = 20;
		vis->width = 900;
		vis->higth = 1000;
		vis->ret_higth = 150;
	}
	else if (vis->p_w <= 99)
	{
		vis->hw = 800 / vis->p_w;
		vis->delay = 1;
		vis->width = 1250;
		vis->higth = 1000;
		vis->ret_higth = 150;
	}
}

void	init_percent(t_visu *vis)
{
	vis->color_percent1.r = 239;
	vis->color_percent1.g = 131;
	vis->color_percent1.b = 84;
	vis->text_percent1.x = 155;
	vis->text_percent1.y = vis->width - vis->ret_higth;
	vis->color_percent2.r = 239;
	vis->color_percent2.g = 131;
	vis->color_percent2.b = 84;
	vis->text_percent2.x = 155;
	vis->text_percent2.y = vis->width - vis->ret_higth + 31;
	vis->police = TTF_OpenFont("visu/ttf_fonts/KGBrokenVesselsSketch.ttf", 15);
}

void	init_color_text(t_visu *vis)
{
	vis->color_text.r = 239;
	vis->color_text.g = 131;
	vis->color_text.b = 84;
	vis->color_textp2.r = 255;
	vis->color_textp2.g = 234;
	vis->color_textp2.b = 208;
	vis->color_textp1.r = 150;
	vis->color_textp1.g = 97;
	vis->color_textp1.b = 107;
}
