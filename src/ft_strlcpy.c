/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:38:26 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/01 16:05:11 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
     while (src[i])
		i++;
	if (!dst || !src)
		return (0);
	while (--size && src[0])
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (i);
}
