/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 16:36:38 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/01 15:22:36 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (len == 0 || s1 == s2)
		return (dst);
	if (s1 < s2)
	{
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
		return (dst);
	}
	while (len--)
		s1[len] = s2[len];
	return (dst);
}
