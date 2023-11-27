/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarte.rrd <ruiduarte.rrd@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:20:19 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/27 10:52:29 by ruiduarte.r      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	*ft_memmove(void *dst, const void *src, size_t n)
 *
 *		copia 'n' de 'src' para 'dst' (areas de memoria podem-se sobrepor de 
 *		forma segura)
 * 
 *  recebe: void *dst - pointer para 'dst'
 *	        const void *src - pointer para 'src'
 *	        size_t n - numero de bytes a copiar
 *	devolve: void* - pointer para 'dst'
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		i = 0;
		while (i++ < n)
			d[i] = s[i];
	}
	return (dst);
}


int main(void)
{
    char 	str[] = "Hello, World!";
    char 	dest[] = "Hello, World!";
    char 	dest2[] = "Hello, World!";
    size_t 	n = strlen(str) + 5;

	ft_memmove(dest, str, n);
	memmove(dest2, str, n);
	if (strcmp(dest, dest2) == 0)
		printf("✔ - 1: (ft_memmove = '%s' | memmove = '%s')\n", dest, dest2);
	else
		printf("✘ - 1: (ft_memmove = '%s' | memmove = '%s')\n", dest, dest2);
	return (0);
}

