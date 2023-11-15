/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:06:38 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:57:05 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	char	*ft_strchr(const char *s, int c)
 *
 *      procura a primeira ocorrencia de 'c' em 's', devolvea um pointer para a
 * 		posicao do caractere encontrado ou NULL se 'c' nao for encontrado
 * 
 *	recebe: const char *s - pointer para 's'
 *	        int c - o caractere
 *	devolve: char* - pointer para a primeira ocorrencia de 'c' em 's'
 *            		NULL se 'c' nao for encontrado
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
int	main(void)
{
	char	*str = "teste";
	char	c = '\0';
	char	*n = ft_strchr(str, c);
	char	*n2 = strchr(str, c);

	if (n == n2)
		printf("✔ - 1: (ft_strchr = '%s' | strchr = '%s')\n", n, n2);
	else
		printf("✘ - 1: (ft_strchr = '%s' | strchr = '%s')\n", n, n2);
	return (0);
}
*/