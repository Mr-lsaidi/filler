/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 12:28:58 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/20 22:37:35 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

void	start(t_filler *fr)
{
	get_info(fr);
	get_plat(fr);
	info_token(fr);
	get_token(fr);
	init_h_map(fr);
	insert_init(fr);
	insert(fr);
	place_tkn(fr);
	del_plat(fr);
	del_hmap(fr);
	ft_putnbr(fr->b_x);
	ft_putchar(' ');
	ft_putnbr(fr->b_y);
	ft_putchar('\n');
}

int		main(void)
{
	t_filler	fr;

	if (ft_get_next_line(0, &fr.line))
	{
		if (fr.line[10] == '1')
		{
			fr.me = 'O';
			fr.v_me = -1;
			fr.enme = 'X';
			fr.v_enme = -2;
		}
		else if (fr.line[10] == '2')
		{
			fr.me = 'X';
			fr.v_me = -2;
			fr.enme = 'O';
			fr.v_enme = -1;
		}
		free(fr.line);
	}
	while (1)
	{
		start(&fr);
	}
	return (0);
}
