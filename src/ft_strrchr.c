/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:17:41 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/01 16:05:06 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	strchr(const char *s, int c)
{
    int	i;
    char	*a;

    i = (int)ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == c)
        {
            a = (char*)(s + i); 
            return (a);
        }
        i--;
    }
    return (0);
}
