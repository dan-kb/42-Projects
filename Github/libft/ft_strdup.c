/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 09:31:49 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/01 14:22:56 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (s1[size])
		size++;
	new = (char*)malloc(sizeof(*new) * (size + 1));
	if (!new)
		return (NULL);
	while (i < size)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
