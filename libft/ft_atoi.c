/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:41:11 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/17 14:41:14 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' \
			|| c == '\r' || c == '\f' || c == '\v');
}

int			ft_atoi(const char *str)
{
	const	char			*p;
	unsigned long long int	number;

	while (ft_isspace(*str))
		str++;
	p = str;
	if (*str == '+' || *str == '-')
		p++;
	number = 0;
	while (*p && *p <= '9' && *p >= '0' && number <= 9223372036854775807)
	{
		number += (number < 9223372036854775807) ? *p - '0' : '0';
		if (*(p + 1) <= '9' && *(p + 1) >= '0')
			number *= (number < 9223372036854775807) ? 10 : 1;
		p++;
	}
	if (*str == '-')
		return (number > 9223372036854775807) ? (0) : (-(int)(number));
	if (number > 9223372036854775807)
		return (-1);
	return (number);
}
