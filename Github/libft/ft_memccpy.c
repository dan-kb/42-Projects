/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 16:39:05 by dbanifat          #+#    #+#             */
/*   Updated: 2016/09/26 14:33:03 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	l;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	l = (unsigned char)c;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (src == dst || n == 0)
		return (0);
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == l)
			return (s1 + i + 1);
		i++;
	}
	return (0);
}
