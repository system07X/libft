/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:17:56 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/01 16:05:08 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
     if (n == 0 || s1 == NULL || s2 == NULL)
		return (0);
	n--;
	while (n && s1[0] && s1[0] == s2[0])
	{
		s1++;
		s2++;
		n--;
	}
	return ((int)s1[0] - (int)s2[0]);
}