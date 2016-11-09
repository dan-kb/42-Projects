/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:48:00 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/06 16:13:48 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					n;
	unsigned long long	r;

	i = 0;
	n = 1;
	r = 0;
	while (ft_if_space(str[i]))
		str++;
	n = (*str == '-') ? -1 : 1;
	str = (*str == '+' || *str == '-') ? str + 1 : str;
	while (*str == '0')
		str++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		r = r * 10 + (str[i++] - 48);
	if (i > 19 || r >= 9223372036854775808ULL)
		return (n == -1 ? 0 : -1);
	return (r * n);
}
