/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 10:25:30 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/20 13:27:03 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILLER_H
# define FT_FILLER_H

# include "../../libft/libft.h"

typedef struct		s_filler
{
	char			**pla;
	char			*temp;
	char			**token;
	char			me;
	char			enme;
	int				v_me;
	int				v_enme;
	char			*line;
	int				p_h;
	int				p_w;
	int				t_h;
	int				t_w;
	int				scor;
	int				f_scor;
	int				stars;
	int				b_x;
	int				b_y;
	int				**h_map;
	int				m_x;
	int				m_y;
	int				x;
	int				y;
}					t_filler;

void				get_info(t_filler *fr);
void				get_plat(t_filler *fr);
void				info_token(t_filler *fr);
void				get_token(t_filler *fr);
void				init_h_map(t_filler *fr);
void				insert_init(t_filler *fr);
void				insert(t_filler *fr);
void				check_first(t_filler *fr, int i, int j);
void				check_sec(t_filler *fr, int i, int j, int k);
void				del_hmap(t_filler *flr);
void				del_plat(t_filler *flr);
int					check_tkn(t_filler *fr, int i, int j);
void				place_tkn(t_filler *fr);
void				correct(t_filler *fr);
void				min_xy(t_filler *fr);
void				place_condition(t_filler *fr, int i, int j);
int					check_condition(t_filler *fr, int i, int j);

#endif
