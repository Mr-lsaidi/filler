/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:42:21 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:42:22 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*p;

	if (!alst || !*alst)
		return ;
	while (*alst)
	{
		p = *alst;
		*alst = (*alst)->next;
		(*del)(p->content, p->content_size);
		free(p);
	}
	*alst = NULL;
}
