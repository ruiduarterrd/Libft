/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:49:47 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:57:33 by ruirodri         ###   ########.fr       */
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
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	len;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (size < dlen)
		return (slen + size);
	i = 0;
	len = dlen + slen;
	while (((i + 1) < (size - dlen)) && (src[i] != '\0'))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (len);
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