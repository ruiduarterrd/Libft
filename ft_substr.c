/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 05:39:52 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:58:31 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	char	*ft_substr(char const *s, unsigned int start, size_t len)
 *
 *		extrai uma substring de 's' iniciando no indice 'start' e com 
 *		comprimento maximo 'len'
 *
 *	recebe: char const *s - pointer para 's'
 *	        unsigned int start - posicao inicial para comecar a substring
 *	        size_t len - comprimento maximo da substring
 *	devolve: char* - pointer para a nova substring resultante
 *					NULL falhar a alocacao de memoria
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

/*
int	main(void)
{
	char			str[] = "Hello, World!";
	unsigned int	start = 7;
	size_t 			len = 5;
	char			*n = ft_substr(str, start, len);

	printf("✔ - 1: (ft_substr = '%s' | '%s' '%zu')\n", n, str, len);
	free(n);
	return (0);
}
*/