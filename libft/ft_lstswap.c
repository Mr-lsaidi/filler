/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:43:52 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:43:54 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstswap(t_list **lst1, t_list **lst2)
{
	t_list	*temp;

	temp = ft_lstnew((*lst2)->content, (*lst2)->content_size);
	ft_memcpy((*lst2)->content, (*lst1)->content, (*lst1)->content_size);
	(*lst2)->content_size = (*lst1)->content_size;
	ft_memcpy((*lst1)->content, temp->content, temp->content_size);
	(*lst1)->content_size = temp->content_size;
}
