/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:04:24 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:58:15 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	char	*ft_strrchr(const char *s, int c)
 *
 *		procura a ultima ocorrencia de 'c' em 's', devolve um pointer para a 
 *		posicao do caractere encontrado ou NULL se 'c' nao for encontrado
 *
 *	recebe: const char *str - pointer para 's'
 *	        int c - o caractere
 *	devolve: char* - pointer para a ultima ocorrencia de 'c' em 's'
 *            		NULL se 'c' nao for encontrado
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (p);
}

/*
int	main(void)
{
	char	str[] = "Hello, World!";
	int		c = 'A';
	char	*n = ft_strrchr(str, c);
	char	*n2 = strrchr(str, c);

	if (strcmp(n, n2) == 0)
		printf("✔ - 1: (ft_strrchr = '%s' | strrchar = '%s')\n", n, n2);
	else
		printf("✘ - 1: (ft_strrchr = '%s' | strrchar = '%s')\n", n, n2);
	return (0);
}
*/