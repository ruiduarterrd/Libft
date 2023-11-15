/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 05:33:58 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:57:12 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	char	*ft_strdup(const char *s)
 *
 *      duplica 's1' em uma nova area de memoria alocada
 *
 *	recebe: const char *s - pointer para 's'
 *	devolve: char* - pointer para a nova string duplicada
 *					NULL se falhar na alocacao de memoria
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*p;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	p = str;
	while (*s)
		*p++ = *s++;
	*p = '\0';
	return (str);
}

/*
int	main(void)
{
	const char	*str = "Hello, World!";
	char	*n = ft_strdup(str);
	char	*n2 = strdup(str);

	printf("str = '%p'\n", str);
	if (strcmp(n, n2) == 0)
	{
		printf("✔ - 1: (ft_strdup = '%p' | strdup = '%p')\n", n, n2);
		printf("✔ - 1: (ft_strdup = '%s' | strdup = '%s')\n", n, n2);
		free(n);
		free(n2);
	}
	else
		printf("✘ - 1: Erro ao alocar memoria.\n");
	return (0);
}
*/