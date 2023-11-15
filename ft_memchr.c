/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:34:52 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 20:08:35 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	*ft_memchr(const void *str, int c, size_t n)
 *
 *		procura a primeira ocorrencia de 'c' nas primeira 'n' posicoes de 'str'
 *	
 *	recebe: const void *str - pointer para 'str'
 *			int c - o caractere
 *			size_t n - numero de bytes a verificar
 *	devolve: void* - pointer 'str'
 *					NULL
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	a[] = "Hello, World!";
	int		c = 'A';
	size_t	n = strlen(a);
	char 	*s1 = ft_memchr(a, c, n);
	char 	*s2 = memchr(a, c, n);

	if (s1 == s2)
		printf ("✔ - 1: (ft_memchr = %s | memchr = %s)\n", s1, s2);
	else
		printf ("✘ - 1: (ft_memchr = %s | memchr = %s)\n", s1, s2);
	return (0);
}
*/