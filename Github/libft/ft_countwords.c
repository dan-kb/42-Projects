/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 15:53:26 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/04 16:19:28 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, int c)
{
	int n;
	int index;

	n = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] != c && (s[index + 1] == '\0' || s[index] == c))
			n++;
		index++;
	}
	return (n);
}
