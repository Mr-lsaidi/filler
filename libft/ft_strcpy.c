/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:46:50 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:46:52 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	char	*p;

	p = dest;
	while ((*p++ = *src++))
		;
	return (dest);
}
