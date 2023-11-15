/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:11:33 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:51:57 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	int	ft_atoi(char *str)
 *
 *		converte uma string num inteiro
 *
 *	recebe: char *str - numero char
 *	devolve: int (num * sign) - numero int
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		num;
	char	*s;

	num = 0;
	sign = 1;
	s = (char *)str;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = sign * -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
		num = num * 10 + (*s++ - '0');
	return (num * sign);
}

/*
int	main(void)
{
	char	s[] = " --123";

	if (ft_atoi(s) == atoi(s))
	{
		printf ("✔ - 1: ");
		printf ("(ft_atoi = '%d' | atoi = '%d')\n", ft_atoi(s), atoi(s));
	}
	else
	{
		printf ("✘ - 1: ");
		printf ("(ft_atoi = '%d' | atoi = '%d')\n", ft_atoi(s), atoi(s));
	}
	return (0);
}
*/