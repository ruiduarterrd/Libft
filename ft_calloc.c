/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 05:24:01 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:52:33 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	ft_calloc(size_t nmemb, size_t size)
 *
 *		aloca memoria para um array de 'x' elementos, cada um de 'size' bytes, e 
 *		inicializa todos os bytes alocados a zero
 *
 *	recebe: size_t nmemb - numero de elementos que vao ser alocados
 *			size_t size - tamanho em bytes de cada elemento
 *	devolve: void *p - pointer onde esta alocado os elementos
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

/*
int	main(void)
{
	char	*p1;
	char	*p2;
	int		i;
	size_t	nmemb;
	size_t	size;

	i = 0;
	nmemb = 5;
	size = sizeof(char);
	p1 = (char *)ft_calloc(nmemb, size);
	p2 = (char *)calloc(nmemb, size);
	if (p1 && p2)
	{
		if (memcmp(p1, p2, nmemb * size) == 0)
			printf ("✔ - 1: ");
		else
			printf ("✘ - 1: ");
		printf ("(ft_bzero = ");
		while (i < nmemb * size)
			printf("%d ", p1[i++]);
		printf (" | ");
		printf ("bzero = ");
		i = 0;
		while (i < nmemb * size)
			printf("%d ", p2[i++]);
		printf(")\n");
		free(p1);
		free(p2);
	}
	else
		printf ("✘ - 1: Falha na alocacao de memoria\n");
	return (0);
}
*/