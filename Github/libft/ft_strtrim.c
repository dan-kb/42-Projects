/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 15:06:54 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/06 15:15:10 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		l;
	int		index;

	i = 0;
	index = 0;
	if (!s)
		return (NULL);
	l = ft_strlen((char *)s);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	while (s[l - 1] == ' ' || s[l - 1] == '\n' || s[l - 1] == '\t')
		l--;
	str = (char *)malloc((unsigned int)(l - i + 1));
	if (!str)
		return (NULL);
	while (i < l)
	{
		str[index] = s[i];
		index++;
		i++;
	}
	str[index] = '\0';
	return (str);
}
