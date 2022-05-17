/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:00:55 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/06 15:17:08 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	char *s;
	size_t len;

	len = (ft_strlen(s1) + ft_strlen(s2));
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	while (*s1)
		*s++ = *s1++;
	while (*s2)
		*s++ = *s2++;
	*s = 0;
	return (s - len);
}

int main()
{
	char s1[] = "coucou";
	char s2[] = "salut";

	printf("%s", ft_strjoin(s1, s2));
}