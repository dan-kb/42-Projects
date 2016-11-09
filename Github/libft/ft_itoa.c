/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:47:01 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/03 14:17:13 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		i;
	int		r;
	int		l;
	char	*s;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0 && i++ > -1)
		n *= -1;
	r = n;
	l = 1;
	while (r /= 10)
		l++;
	s = (char *)malloc(sizeof(char) * (l + i + 1));
	if (!s)
		return (NULL);
	if (i > 0)
		s[0] = '-';
	s[l-- + i] = '\0';
	s[l-- + i] = n % 10 + 48;
	while (n /= 10)
		s[l-- + i] = n % 10 + 48;
	return (s);
}
