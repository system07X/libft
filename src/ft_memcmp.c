/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:18:55 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/01 16:05:14 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0 || s1 == NULL || s2 == NULL)
		return (0);
	while (n--)
	{
		if (((unsigned char *)s1)[0] != ((unsigned char *)s2)[0])
			return ((int)((unsigned char *)s1)[0] - (int)((unsigned char *)s2)[0]);
		s1++;
		s2++;
	}
	return (0);
}
