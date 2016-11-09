/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 13:07:50 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/03 14:10:20 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(size);
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	if (i == size)
		return (str);
	else
		return (NULL);
}
