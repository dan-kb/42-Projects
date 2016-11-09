/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 14:43:20 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/06 15:12:16 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		l;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	l = ft_strlen((char *)s);
	str = (char *)malloc(l + 1);
	if (!str)
		return (NULL);
	while (i < l)
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
