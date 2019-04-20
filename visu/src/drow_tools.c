/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drow_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:23:29 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/20 13:09:40 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vis.h"

void	drow(t_visu *vis)
{
	if (vis->plat[vis->i][vis->j] == 'X')
	{
		SDL_FillRect(vis->surf, &vis->r, SDL_MapRGB(vis->surf->format,
		255, 234, 208));
		vis->scor_p1++;
	}
	else if (vis->plat[vis->i][vis->j] == 'x')
		SDL_FillRect(vis->surf, &vis->r, SDL_MapRGB(vis->surf->format,
		247, 111, 142));
	else if (vis->plat[vis->i][vis->j] == 'O')
	{
		SDL_FillRect(vis->surf, &vis->r, SDL_MapRGB(vis->surf->format,
		150, 97, 107));
		vis->scor_p2++;
	}
	else if (vis->plat[vis->i][vis->j] == 'o')
		SDL_FillRect(vis->surf, &vis->r, SDL_MapRGB(vis->surf->format,
		150, 241, 190));
	else if (vis->plat[vis->i][vis->j] == '.')
		SDL_FillRect(vis->surf, &vis->r, SDL_MapRGB(vis->surf->format,
		180, 184, 171));
}

void	start_vis(t_visu *vis)
{
	while (1)
	{
		vis->r.x = 150;
		vis->r.y = 150;
		vis->r.w = vis->hw;
		vis->r.h = vis->hw;
		get_plat(vis);
		if (skip(vis) == 2)
			break ;
		vis->i = -1;
		while (++vis->i < vis->p_h)
		{
			vis->j = -1;
			while (++vis->j < vis->p_w)
			{
				vis->r.x = vis->r.x + vis->hw + 1;
				drow(vis);
			}
			vis->r.x = 150;
			vis->r.y = vis->r.y + vis->hw + 1;
		}
		end_vis(vis);
		SDL_UpdateWindowSurface(vis->window);
		SDL_Delay(vis->delay);
	}
}

void	end_vis(t_visu *vis)
{
	vis->scor1 = ((((vis->scor_p1 * 100) / vis->divis) * 890) / 100);
	vis->scor2 = ((((vis->scor_p2 * 100) / vis->divis) * 890) / 100);
	vis->ret_r.x = 150;
	vis->ret_r.y = vis->width - vis->ret_higth;
	vis->ret_r.w = vis->scor1;
	vis->ret_r.h = 20;
	vis->ret_r2.x = 150;
	vis->ret_r2.y = vis->width - vis->ret_higth + 30;
	vis->ret_r2.w = vis->scor2;
	vis->ret_r2.h = 20;
	SDL_FillRect(vis->surf, &vis->ret_r, SDL_MapRGB(vis->surf->format,
	255, 234, 208));
	SDL_FillRect(vis->surf, &vis->ret_r2, SDL_MapRGB(vis->surf->format,
	150, 97, 107));
	vis->percent1 = TTF_RenderText_Blended(vis->police,
	ft_strjoin(ft_itoa(vis->scor1), " %"), vis->color_percent1);
	SDL_BlitSurface(vis->percent1, NULL, vis->surf, &vis->text_percent1);
	vis->percent2 = TTF_RenderText_Blended(vis->police,
	ft_strjoin(ft_itoa(vis->scor2), " %"), vis->color_percent2);
	SDL_BlitSurface(vis->percent2, NULL, vis->surf, &vis->text_percent2);
}
