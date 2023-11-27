/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarte.rrd <ruiduarte.rrd@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:01:58 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/27 11:08:51 by ruiduarte.r      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	size_t	ft_strlcpy(char *dst, const char *src, size_t size)
 *
 *		copia 'size - 1' caracteres de 'src' para 'dst', e termina 'dst' com 
 *		'\0'. O tamanho total da string 'src' e retornado
 *	
 *	recebe: char *dst - pointer para 'dst'
 *	        const char *src - pointer para 'src'
 *	        size_t size - tamanho maximo da copia
 *	devolve: size_t - o comprimento de 'src'
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len);
	while ((size - 1) > i && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest[3] = "";
	size_t	n = ft_strlcpy(dest, src, sizeof(dest));

	if (n == strlen(src))
		printf("✔ - 1: (ft_strlcpy = '%zu' '%s')\n", n, dest);
	else
		printf("✘ - 1: (ft_strlcpy = '%zu' '%s')\n", n, dest);
	return (0);
}
*/