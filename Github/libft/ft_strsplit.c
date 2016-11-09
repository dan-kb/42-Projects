/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 15:26:19 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/06 15:16:47 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int		count(char const *s, char c)
{
	int n;
	int index;

	n = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] != c && (s[index + 1] == '\0' || s[index + 1] == c))
			n++;
		index++;
	}
	return (n);
}

void	copy_tmp(char const *s, char *tmp, int i, int k)
{
	int index;
	int size;

	index = 0;
	size = k - i;
	while (index < size)
		tmp[index++] = s[i++];
	tmp[index] = '\0';
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	char	**str;
	char	*tmp;

	i = 0;
	k = 0;
	if (!s || !(str = (char **)malloc(sizeof(char *) * (count(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0' && s[k] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		k = i;
		while (s[k] != c && s[k])
			k++;
		if (s[i] == '\0' && s[k] == '\0')
			break ;
		tmp = (char *)malloc(sizeof(char) * (k - i + 1));
		copy_tmp(s, tmp, i, k);
		i = k;
		*str++ = tmp;
	}
	*str = NULL;
	return (str - (k = count(s, c)));
}
