/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarte.rrd <ruiduarte.rrd@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:37:56 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/27 10:53:22 by ruiduarte.r      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void    *ft_memcpy(void *dst, const void *src, size_t n)
 *
 *		 copia 'n' bytes de 'src' para 'dst' (nao sobrepor areas de memoria)
 *	
 *	recebe: void *dest - pointer para 'dst'
 *			const void *src - pointer 'src'
 *			size_t n - numero de bytes a copiar
 *	devolve: void* - pointer para 'dst'
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;

	if (dst == NULL && src == NULL)
		return (NULL);
	p = (char *)dst;
	while (n > 0)
	{
		*p = *(char *)src;
		p++;
		src++;
		n--;
	}
	return ((void *)dst);
}

/*
int	main(void)
{
	char    src[] = "Hello, World!";
    char 	dest[15] = "Hello, World!";
    char 	dest2[15] = "Hello, World!";
	size_t  n = strlen(src) - 5;

	ft_memcpy(dest, src, n);
	memcpy(dest2, src, n);
	if (strcmp(dest, dest2) == 0)
		printf("✔ - 1: (ft_memcpy = '%s' | memcpy = '%s')\n", dest, dest2);
	else
		printf("✘ - 1: (ft_memcpy = '%s' | memcpy = '%s')\n", dest, dest2);
	return (0);
}
*/
