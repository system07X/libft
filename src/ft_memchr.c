/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:27:30 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/01 16:05:15 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
     if (n == 0 || s == NULL)
		return (NULL);
     while (--n &&((unsigned char *)s)[0] != (unsigned char *)c)
		s++;
	if (((unsigned char *)s)[0] == (unsigned char)c)
		return (s);
     return (0);
}
