/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_tmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 16:02:04 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/04 16:19:47 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_copy_tmp(char const *s, char *tmp, int start, int end)
{
	int index;
	int size;

	index = 0;
	size = start - end;
	while (index < size)
		tmp[index++] = s[start++];
	tmp[index] = '\0';
}
