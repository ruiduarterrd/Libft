/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarte.rrd <ruiduarte.rrd@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:49:47 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/27 11:08:04 by ruiduarte.r      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	size_t	ft_strlcat(char *dest, const char *src, size_t size)
 *
 *		concatena a 'src' a 'dest' com um limite de tamanho 'size', devolve o 
 *		comprimento total da nova string 'dst + src'
 *	
 *	recebe: char *dest - pointer para 'dest'
 *	        const char *src - pointer para 'src'
 *	        size_t dest_size - tamanho maximo de 'dest'
 *	devolve: size_t - comprimento total da nova string 'dst + src'
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(src);
	if (!size)
		return (s_len);
	d_len = ft_strlen(dst);
	i = d_len;
	if (size > 0 && size > d_len)
	{
		while (*src && (i < size - 1))
			dst[i++] = *src++;
		dst[i] = '\0';
		return (d_len + s_len);
	}
	return (s_len + size);
}

/*
int	main(void)
{
	char	dest[25] = "Hello,";
	char	src[] = " world!";
	size_t	dest_size = sizeof(dest);
    size_t	n = ft_strlcat(dest, src, dest_size);

	if (n == strlen(dest))
		printf("✔ - 1: (ft_strlcat = '%zu' '%s')\n", n, dest);
	else
		printf("✘ - 1: (ft_strlcat = '%zu' '%s')\n", n, dest);
	return (0);
}
*/