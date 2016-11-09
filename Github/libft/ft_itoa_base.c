/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:56:24 by dbanifat          #+#    #+#             */
/*   Updated: 2016/11/06 17:56:33 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_itoa_base(int value, int base)
{
    long    n;
    long    temp;
    int     len;
    char    *str;
    char    *bs;
    len = 0;
    bs = "0123456789ABCDEF";
    temp = value;
    n = value;
    if (value < 0)
    {
        if (base == 10)
            len++;
        n = n * -1;
    }
    if (!value)
        return("0");
    while (value)
    {
        value /= base;
        len++;
    }
    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (0);
    str[len] = '\0';
    while (n)
    {
        str[--len] = bs[n % base];
        n /= base;
    }
    if (temp < 0 && base == 10)
        str[0] = '-';
    return (str);
}
