/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:12:13 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:58:38 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	int	ft_tolower(int c)
 *
 *		converte um caractere maiusculo em minusculo
 *
 *	recebe: int c - o caractere
 *	devolve: int - o caractere minusculo
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
int	main(void)
{
	char	str[] = "A";
	char	str2[] = "A";
	int		n = ft_tolower(*str);
	int		n2 = tolower(*str2);

	if (n == n2)
		printf("✔ - 1: (ft_tolower = '%d' | tolower = '%d')\n", n, n2);
	else
		printf("✘ - 1: (ft_tolower = '%d' | tolower = '%d')\n", n, n2);
	return (0);
}
*/