/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:54:47 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/02 00:18:59 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;

	if (size && (nmemb * size > (size_t)-1))
		return (0);
	p = malloc(nmemb * size);

	if (p = NULL)
		return (0);
	ft_bzero(p, size * nmemb);
	return (p);
}
