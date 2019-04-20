/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:43:45 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:43:47 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstreverse(t_list **lst)
{
	t_list		*res;
	t_list		*p;

	res = NULL;
	p = *lst;
	while (p)
	{
		ft_lstadd(&res, ft_lstnew(p->content, p->content_size));
		p = p->next;
	}
	*lst = res;
}
