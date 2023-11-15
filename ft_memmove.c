/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:20:19 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:55:26 by ruirodri         ###   ########.fr       */
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
	size_t	len;

	len = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src < dst)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	else
	{
		while (len < n)
		{
			((char *)dst)[len] = ((char *)src)[len];
			len++;
		}
	}
	return (dst);
}

/*
int main(void)
{
    char 	str[] = "Hello, World!";
    char 	dest[] = "Hello, World!";
    char 	dest2[] = "Hello, World!";
    size_t 	n = strlen(str) - 5;

	ft_memmove(dest, str, n);
	memmove(dest2, str, n);
	if (strcmp(dest, dest2) == 0)
		printf("✔ - 1: (ft_memmove = '%s' | memmove = '%s')\n", dest, dest2);
	else
		printf("✘ - 1: (ft_memmove = '%s' | memmove = '%s')\n", dest, dest2);
	return (0);
}
*/
