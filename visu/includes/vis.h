/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vis.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:17:19 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/21 18:34:01 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIS_H
# define VIS_H

# include <SDL.h>
# include <stdlib.h>
# include <SDL_ttf.h>
# include <SDL_keycode.h>
# include <SDL_video.h>
# include "../../libft/libft.h"

typedef struct	s_v
{
	char		**bord;
	struct s_v	*next;
	struct s_v	*prev;
}				t_v;

typedef struct	s_visu
{
	SDL_Window		*window;
	SDL_Surface		*surf;
	SDL_Surface		*textp1;
	SDL_Surface		*textp2;
	SDL_Surface		*percent1;
	SDL_Surface		*percent2;
	SDL_Surface		*winer;
	SDL_Surface		*vs;
	SDL_Surface		*fille_name;
	SDL_Surface		*name_bar;
	TTF_Font		*police;
	SDL_Color		color_text;
	SDL_Color		color_textp1;
	SDL_Color		color_textp2;
	SDL_Color		color_winer;
	SDL_Color		color_percent1;
	SDL_Color		color_percent2;
	SDL_Color		color_filler;
	SDL_Color		color_name_bar;
	SDL_Event		event;
	SDL_Rect		r;
	SDL_Rect		ret_r;
	SDL_Rect		ret_r2;
	SDL_Rect		text_rectp1;
	SDL_Rect		text_rectp2;
	SDL_Rect		text_vs;
	SDL_Rect		text_percent1;
	SDL_Rect		text_percent2;
	SDL_Rect		text_winer;
	SDL_Rect		text_filler;
	SDL_Rect		text_name_bar;
	SDL_Rect		display;
	int				scor_p1;
	int				scor_p2;
	int				scor_point;
	int				scor1;
	int				scor2;
	int				result_p1;
	int				result_p2;
	int				divis;
	int				i;
	int				j;
	char			*line;
	int				p_h;
	int				p_w;
	int				width;
	int				higth;
	int				ret_higth;
	int				hw;
	char			*p1;
	char			*p2;
	char			*win;
	char			**plat;
	char			*temp;
	int				delay;
}				t_visu;


void			retsult(t_visu *vis);
void			head_info(t_visu *vis);
void			get_players1(t_visu *vis);
void			get_players2(t_visu *vis);
void			get_platinfo(t_visu *vis);
void			get_plat(t_visu *vis);
int				skip(t_visu *vis);
void			drow(t_visu *vis);
void			inti_winsur(t_visu *vis);
void			del_plat(t_visu *vis);
void			close_sdl(t_visu *vis);
void			catlc_init(t_visu *vis);
void			start_vis(t_visu *vis);
void			manager_event(t_visu *vis);
void			inti_winsur(t_visu *vis);
void			catlc_init(t_visu *vis);
void			init_percent(t_visu *vis);
int				init_tool(t_visu *vis);
void			init_color_text(t_visu *vis);
void			end_vis(t_visu *vis);
void			drow(t_visu *vis);
void			start_vis(t_visu *vis);
void			show(t_visu *vis);
void			show_winer(t_visu *vis);
void			text_filler(t_visu *vis);
void			background(t_visu *vis);
void			winer_box(t_visu *vis);
void			end_name(t_visu *vis);

#endif
