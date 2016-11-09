/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 20:44:23 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/03 14:34:50 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int index;

	index = 0;
	if (dst == src || len == 0)
		return (dst);
	while (index < len && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	while (index < len && dst[index])
		dst[index++] = '\0';
	return (dst);
}
