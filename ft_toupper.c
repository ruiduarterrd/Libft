/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:12:17 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:58:44 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	int	ft_toupper(int c)
 *
 *		converte um caractere minusculo em maiusculo
 *	
 *	recebe: int c - o caractere
 *	devolve: int - o caractere maiusculo
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*
int	main(void)
{
	char	str[] = "a";
	char	str2[] = "a";
	int		n = ft_toupper(*str);
	int		n2 = toupper(*str2);

	if (n == n2)
		printf("✔ - 1: (ft_toupper = '%d' | toupper = '%d')\n", n, n2);
	else
		printf("✘ - 1: (ft_toupper = '%d' | toupper = '%d')\n", n, n2);
	return (0);
}
*/