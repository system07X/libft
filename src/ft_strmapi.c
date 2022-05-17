/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:13:06 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/28 16:21:31 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char fonction(unsigned int a, char c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

char *ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char *ret;
	unsigned int offset;

	offset = 0;
	if (s == NULL)
		return (NULL);
	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ret == NULL)
		return (NULL);
	while (s[offset])
	{
		if (f)
			ret[offset] = f(offset, s[offset]);
		else
			ret[offset] = s[offset];
		offset++;
	}
	ret[offset] = '\0';
	return (ret);
}

int main()
{
	char *s;

	s = "bonjour";
	printf("%s", ft_strmapi(s, fonction));
}