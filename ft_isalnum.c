/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:11:40 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:52:54 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	int	ft_isalnum(int x)
 *
 *		verifica se 'x' e um caractere alfabetico ou um digito
 *
 *	recebe: int x - o caractere
 *	devolve: int - 1 alfanumerico
 *				   	0 nao alfanumerico
*/

#include "libft.h"

int	ft_isalnum(int x)
{
	if (ft_isdigit(x) == 1 || ft_isalpha(x) == 1)
		return (1);
	return (0);
}

/*
int	main(void)
{
    int	a[] = {47, 48, 64, 65, 96, 97, 200};
    int	i = 0;
	int	n = ft_isalnum(a[i]);
	int	n2 = isalnum(a[i]);

	while (i < 7)
	{
		if (n == n2 || (n2 == 8 && n == 1))
			printf("✔ - %d: (ft_isalnum = %d | isalnum = %d)\n", i + 1, n, n2);
		else
			printf("✘ - %d: (ft_isalnum = %d | isalnum = %d)\n", i + 1, n, n2);
		i++;
	}
	return (0);
}
*/