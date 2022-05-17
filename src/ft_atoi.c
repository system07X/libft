/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:32:49 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/02 14:52:45 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_atoi(const char *nptr)
{
	int sign;
	int n;

	sign = 1;
	n = 0;
	while (*nptr == '\t' || 
		*nptr == '\n' ||
		*nptr == '\r' || 
		*nptr == '\v' ||
		*nptr == '\f' || 
		*nptr == ' ')
		nptr++;
	if (*nptr == '-')
		sign = -sign;
	++nptr;
	while (ft_isdigit(*nptr))
	{
		n = n * 10 + *nptr - 48;
		nptr++;
	}
	return (sign * n);
}
