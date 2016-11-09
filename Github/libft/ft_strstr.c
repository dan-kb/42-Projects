/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 21:26:28 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/01 15:06:35 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int k;

	j = 0;
	if ((i = ft_strlen(little)) == 0)
		return ((char *)big);
	while (big[j] != '\0')
	{
		k = 0;
		while (little[k] == big[j + k])
		{
			if (little[k + 1] == '\0')
				return ((char *)big + j);
			k++;
		}
		j++;
	}
	return (NULL);
}
