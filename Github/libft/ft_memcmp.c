/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 18:28:37 by dbanifat          #+#    #+#             */
/*   Updated: 2016/11/04 14:04:06 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*o;
	unsigned char	*t;

	i = 0;
	if ((!s1 && !s2) || n == 0)
		return (0);
	o = (unsigned char *)s1;
	t = (unsigned char *)s2;
	while (o[i] == t[i] && i < n)
		if (i++ == n)
			return (0);
	return (o[i] - t[i]);
}
