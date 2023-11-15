/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:11:50 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:53:12 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	int	ft_isascii(int x)
 *
 *		verifica se 'x' esta dentro do conjunto de caracteres ASCII
 *
 *	recebe: int x - o caractere
 *	devolve: int - 1 e ASCII
 *					0 nao ASCII
*/

#include "libft.h"

int	ft_isascii(int x)
{
	if (0 <= x && x <= 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	a[] = {47, 48, 64, 65, 96, 97, 200};
	int	i = 0;
	int n = ft_isascii(a[i]);
	int n2 = isascii(a[i]);

	while (i < 7)
	{
		if (n == n2)
			printf("✔ - %d: (ft_isascii = %d | isascii = %d)\n", i + 1, n, n2);
		else
			printf("✘ - %d: (ft_isascii = %d | isascii = %d)\n", i + 1, n, n2);
		i++;
	}
	return (0);
}
*/