/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:53:28 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/02 15:34:02 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dest;
	int i;

	i = 0;
	dest = malloc(sizeof(char) * len);
	while (s[start] && len--)
		dest[i++] = s[start++];
	dest[i] = 0;
	return (dest);
}

int main ()
{
	char test[] = "bonjour";

	printf("%s", ft_substr(test, 5, 2));
}