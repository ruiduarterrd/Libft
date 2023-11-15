/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:12:03 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:53:32 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	int	ft_isprint(int x)
 *
 *		verifica se um caractere e imprimivel (visivel na tela)
 *	
 *	recebe: int x - o caractere
 *	devolve: int - 1 e imprimivel
 *					0 nao imprimivel
*/

#include "libft.h"

int	ft_isprint(int x)
{
	if (32 <= x && x <= 126)
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	a[] = {47, 48, 64, 65, 96, 97, 200};
	int	i = 0;
	int n = ft_isprint(a[i]);
	int n2 = isprint(a[i]);

	while (i < 7)
	{
		if (n == n2 || n == 1 && n2 == 16384)
			printf("✔ - %d: (ft_isprint = %d | isprint = %d)\n", i + 1, n, n2);
		else
			printf("✘ - %d: (ft_isprint = %d | isprint = %d)\n", i + 1, n, n2);
		i++;
	}
	return (0);
}
*/