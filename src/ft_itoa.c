/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcousyn <mcousyn@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:42:26 by mcousyn           #+#    #+#             */
/*   Updated: 2022/04/28 14:56:43 by mcousyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int size(int n)
{
	int cpt;

	cpt = 0;
	if (n >= 0 && n <= 9)
		return (1);
	if (n < 0)
	{
		cpt++;
		n = -n;
	}
	while (n > 0)
	{
		cpt++;
		n = n / 10;
	}
	return (cpt);
}

char *str_fill(char *s, int n, int cpt)
{
	int temp;

	temp = 0;
	while (n > 0)
	{
		temp = n % 10;
		s[cpt] = temp + 48;
		n = n / 10;
		cpt--;
	}
	return(s);
}

char *ft_itoa(int n)
{
	char *s;

	s = malloc(sizeof(char) * 11);
	if (n == -2147483648)
	{
		s = "-2147483648";
		return (s);
	}
	else if (n == 0)
	{
		s = "0";
		return (s);
	}
	else if (n < 0)
	{
		n = -n;
		s = str_fill(s, n, size(n));
		s[0] = '-';
	}
	else
		s = str_fill(s, n, size(n) - 1);
	s[11] = '\0';
	return (s);
}

int main()
{
	printf("%s", ft_itoa(-3));
}