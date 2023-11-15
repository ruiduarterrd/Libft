/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:10:55 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 19:32:38 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	ft_bzero(void *s, size_t n)
 *
 *		preenche os primeiros 'n' de 's' com zeros
 *	
 *	recebe: void *s - string para inicializar 'n' bytes com zeros
 *			size_t n - numero de bytes para ficar a 0
 *	devolve: nada
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		*(char *)s++ = 0;
}

/*
int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "Hello, World!";

	ft_bzero(str1, 5);
	bzero(str2, 5);
	if (strcmp(str1, str2) == 0)
		printf ("✔ - 1:  (ft_bzero = '%s' | bzero = '%s')\n", str1, str2);
	else
		printf ("✘ - 1:  (ft_bzero = '%s' | bzero = '%s')\n", str1, str2);
	return (0);
}
*/