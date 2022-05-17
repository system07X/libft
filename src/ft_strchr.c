/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:18:09 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/01 16:05:13 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
    int i;
    char *a;

    i = 0;
    while (i <= (int)ft_strlen(s))
    {
        if (s[i] == c)
        {
            a = (char*)(s + i); 
            return (a);
        }
        i++;
    }
    return (0);
}
