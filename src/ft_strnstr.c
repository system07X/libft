/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:34:18 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/01 16:05:07 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	offset;
	size_t	littlesize;

	littlesize = ft_strlen(little);
	offset = 0;
	while (len-- && big[offset])
	{
		if (ft_memcmp(big + offset, little, littlesize) == 0)
			return ((char *)(big + offset));
		offset++;
	}
}

int main()
{
	const char big[] = "hello toi tu vas bien espece";
	const char little[] = "lo";

	printf("%s", ft_strnstr(big, little, 20));
}
