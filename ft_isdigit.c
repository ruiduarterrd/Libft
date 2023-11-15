/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:11:55 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:53:23 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	int	ft_isdigit(int x)
 *
 *		verifica se 'x' e um digito numerico
 *	
 *	recebe: int x - o caractere
 *	devolve: int - 1 e digito
 *					0 nao digito
*/

#include "libft.h"

int	ft_isdigit(int x)
{
	if ('0' <= x && x <= '9')
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	a[] = {47, 48, 64, 65, 96, 97, 200};
	int	i = 0;
	int n = ft_isdigit(a[i]);
	int n2 = isdigit(a[i]);

	while (i < 7)
	{
		if (n == n2 || n2 == 2048 && n == 1)
			printf("✔ - %d: (ft_isdigit = %d | isdigit = %d)\n", i + 1, n, n2);
		else
			printf("✘ - %d: (ft_isdigit = %d | isdigit = %d)\n", i + 1, n, n2);
		i++;
	}
	return (0);
}
*/