/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:43:33 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:43:34 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*p;
	t_list	*q;
	t_list	*new;

	p = lst;
	new = NULL;
	q = NULL;
	while (p)
	{
		new = ft_lstnew(p->content, p->content_size);
		ft_lstadd2(&q, (*f)(new));
		p = p->next;
	}
	return (q);
}
