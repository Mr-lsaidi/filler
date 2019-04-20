/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:43:05 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:43:06 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list	*ft_lstdup(t_list *src)
{
	t_list	*p;
	t_list	*d;

	p = src;
	d = NULL;
	while (p)
	{
		ft_lstadd2(&d, ft_lstnew(p->content, p->content_size));
		p = p->next;
	}
	return (d);
}
