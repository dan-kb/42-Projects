/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 11:53:42 by dbanifat          #+#    #+#             */
/*   Updated: 2016/09/26 14:32:49 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;
	unsigned char	l;

	i = 0;
	str = (unsigned char *)s;
	l = (unsigned char)c;
	while (n--)
	{
		if (str[i] == l)
			return (str + i);
		i++;
	}
	return (NULL);
}
