/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:07:41 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/01 16:05:12 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	len_strs(char *dst, const char *src)
{
    size_t	val;

    val = 0;
    while (dst[0])
    {
        val++;
        dst++;
    }
    while (src[0])
    {
        val++;
        src++;
    }
    return (val);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

    i = len_strs(dst, src);
    if (!dst || !src)
        return (0);
    size--;
    while (dst[0] && size--)
        dst++;
    while (size-- && src[0])
    {
        dst[0] = src[0];
        src++;
        dst++;
    }
    dst[0] = '\0';
    return (i);
}
