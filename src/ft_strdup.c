/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 00:14:29 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/02 00:18:56 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*str;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s) + 1;
	str = malloc(slen);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, slen);
	return (str);
}
