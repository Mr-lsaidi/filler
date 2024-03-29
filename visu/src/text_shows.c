/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_shows.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:25:37 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/21 18:34:17 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vis.h"

void	text_filler(t_visu *vis)
{
	vis->color_filler.r = 239;
	vis->color_filler.g = 131;
	vis->color_filler.b = 84;
	vis->text_filler.x = 0;
	vis->text_filler.y = 0;
	vis->police = TTF_OpenFont("visu/ttf_fonts/KGSecondChancesSketch.ttf", 15);
	vis->fille_name = TTF_RenderText_Blended(vis->police, "by lsaidi",
	vis->color_filler);
	SDL_BlitSurface(vis->fille_name, NULL, vis->surf, &vis->text_filler);
	SDL_FreeSurface(vis->fille_name);
	vis->color_filler.r = 239;
	vis->color_filler.g = 131;
	vis->color_filler.b = 84;
	vis->text_filler.x = 540;
	vis->text_filler.y = 10;
	vis->police = TTF_OpenFont("visu/ttf_fonts/INFECTED.ttf", 39);
	vis->fille_name = TTF_RenderText_Blended(vis->police, "Filler",
	vis->color_filler);
	SDL_BlitSurface(vis->fille_name, NULL, vis->surf, &vis->text_filler);
	SDL_FreeSurface(vis->fille_name);
	end_name(vis);
}

void	show(t_visu *vis)
{
	vis->text_rectp1.x = 190;
	vis->text_rectp1.y = 50;
	vis->text_rectp2.x = 800;
	vis->text_rectp2.y = 50;
	vis->text_vs.x = 580;
	vis->text_vs.y = 65;
	vis->police = TTF_OpenFont("visu/ttf_fonts/Earth Kid.ttf", 50);
	vis->textp1 = TTF_RenderText_Blended(vis->police, vis->p1,
	vis->color_textp1);
	vis->textp2 = TTF_RenderText_Blended(vis->police, vis->p2,
	vis->color_textp2);
	SDL_BlitSurface(vis->textp1, NULL, vis->surf, &vis->text_rectp1);
	SDL_FreeSurface(vis->textp1);
	SDL_BlitSurface(vis->textp2, NULL, vis->surf, &vis->text_rectp2);
	SDL_FreeSurface(vis->textp2);
	SDL_UpdateWindowSurface(vis->window);
	vis->police = TTF_OpenFont("visu/ttf_fonts/Lievidence SQR.ttf", 30);
	vis->vs = TTF_RenderText_Blended(vis->police, "Vs.",
	vis->color_text);
	SDL_BlitSurface(vis->vs, NULL, vis->surf, &vis->text_vs);
	SDL_FreeSurface(vis->vs);
	text_filler(vis);
	SDL_UpdateWindowSurface(vis->window);
}

void	show_winer(t_visu *vis)
{
	vis->color_winer.r = 239;
	vis->color_winer.g = 131;
	vis->color_winer.b = 84;
	vis->text_winer.x = 400;
	vis->text_winer.y = vis->width - vis->ret_higth + 70;
	if (vis->result_p1 > vis->result_p2)
		vis->win = vis->p1;
	else
		vis->win = vis->p2;
	vis->police = TTF_OpenFont("visu/ttf_fonts/BlackCasper.ttf", 39);
	vis->winer = TTF_RenderText_Blended(vis->police,
	ft_strjoin("THE WINER IS : ", vis->win), vis->color_winer);
	SDL_BlitSurface(vis->winer, NULL, vis->surf, &vis->text_winer);
	SDL_UpdateWindowSurface(vis->window);
	SDL_FreeSurface(vis->winer);
}

void	winer_box(t_visu *vis)
{
	vis->display.x = 130;
	vis->display.y = vis->width - vis->ret_higth - 10;
	vis->display.h = 70;
	vis->display.w = 930;
	SDL_FillRect(vis->surf, &vis->display, SDL_MapRGB(vis->surf->format,
	180, 184, 171));
	SDL_FreeSurface(vis->surf);
}

void	background(t_visu *vis)
{
	SDL_Surface		*bg;

	bg = SDL_LoadBMP("visu/img/bg.bmp");
	SDL_BlitSurface(bg, NULL, vis->surf, NULL);
	SDL_FreeSurface(bg);
}
