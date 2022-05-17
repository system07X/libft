/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:43:23 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/20 17:13:52 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int isinset(char c, const char *set)
{
	while(*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int get_size(const char *s1, const char *set)
{
	int i;

	i = 0;
	while (*s1)
	{
		if (isinset(*s1, set) == 0)
			i++;
		s1++;
	}
	return (i);
}

char *ft_strtrim(const char *s1, const char *set)
{
	char *s;
	size_t i;

	i = 0;
	s = malloc(sizeof(char) * get_size(s1, set));
	if (s == NULL)
		return (0);
	while (*s1)
	{
		if (isinset(*s1, set) == 0)
			s[i++] = *s1;
		s1++;
	}
	return (s);
}

int main ()
{
	const char s1[] = "123456789";
	const char set[] = "2345";

	printf("%s", ft_strtrim(s1, set));
}