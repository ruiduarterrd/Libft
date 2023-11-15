/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:41:42 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:57:26 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	char	*ft_strjoin(char const *s1, char const *s2)
 *
 *		concatena duas strings 's1' e 's2' em uma nova string alocada
 *
 *	recebe: char const *s1 - pointer para 's1'
 *	        char const *s2 - pointer para 's2'
 *	devolve: char* - pointer para a nova string concatenada
 *					NULL falhar a alocacao de memoria
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*p;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	p = str;
	while (s1 && *s1)
		*p++ = *s1++;
	while (s2 && *s2)
		*p++ = *s2++;
	*p = '\0';
	return (str);
}

/*
int	main(void)
{
	const char	*str1 = "Hello, ";
	const char	*str2 = "World!";
	char		*n = ft_strjoin(str1, str2);

	if (n)
	{
		printf("✔ - 1: (ft_strjoin = '%s')\n", n);
		free(n);
	}
	else
		printf("✘ - 1: Erro ao alocar memoria.\n");
	return (0);
}
*/