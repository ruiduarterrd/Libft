/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:11:45 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:53:04 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	int	ft_isalpha(int x)
 *
 *		verifica se 'x' e uma letra do alfabeto
 *
 *	recebe: int x - o caractere 
 *	devolve: int - 1 e letra
 *					0 nao letra
*/

#include "libft.h"

int	ft_isalpha(int x)
{
	if (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	aux[] = {47, 48, 64, 65, 96, 97, 200};
	int	i = 0;
	int	n = ft_isalpha(aux[i]);
	int	n2 = isalpha(aux[i]);

	while (i < 7)
	{
		if (n == n2 || n2 == 1024 && n == 1)
			printf("✔ - %d: (ft_isalpha = %d | isalpha = %d)\n", i + 1, n, n2);
		else
			printf ("✘ - %d: (ft_isalpha = %d | isalpha = %d)\n", i + 1, n, n2);
		i++;
	}
	return (0);
}
*/