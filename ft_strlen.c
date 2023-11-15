/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:13:12 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:57:47 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	size_t	ft_strlen(const char *str)
 *
 *		calcula o comprimento da string 'str'
 *
 *	recebe: const char *str - pointer para a string 'str'
 *	devolve: size_t - comprimento da string (conta com '\0')
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	char 	str[] = "Hello, World!";
	int		n = ft_strlen(str);
	int		n2 = strlen(str);

	if (strlen(str) == ft_strlen(str))
		printf("✔ - 1: (ft_strlen = '%d' | strlen = '%d')\n", n, n2);
	else
		printf("✘ - 1: (ft_strlen = '%d' | strlen = '%d')\n", n, n2);
	return (0);
}
*/