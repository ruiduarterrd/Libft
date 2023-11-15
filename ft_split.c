/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 03:37:37 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/09 16:38:54 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	char	**ft_split(char const *s, char c)
 *
 *		divide 's' em substrings usando o caractere 'c' como delimitador
 *
 *	recebe: char const *s - pointer para 's'
 *	        char c - caractere delimitador
 *	devolve: char** - um array de strings 'strs'
 *					NULL em caso de erro de alocacao
*/

/*
 *	static	int	ft_words(char const *s, char c)
 *
 *		conta o numero de palavras de 's' as palavras sao delimitadas por 'c'
 *
 *	recebe: char const *s - pointer para 's'
 *	        char c - caractere delimitador
 *	devolve: int - umero de palavras
*/

#include "libft.h"

static	int	ft_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		len;

	i = 0;
	if (s == NULL)
		return (NULL);
	strs = malloc(sizeof(char *) * (ft_words(s, c) + 1));
	if (strs == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && s++)
				len++;
			strs[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	strs[i] = NULL;
	return (strs);
}

/*
int	main(void)
{
	char str[] = "Hello/World";
	char **result = ft_split(str, '/');

	if (result)
	{
		int i = 0;
		printf("String: '%s'\n", str);
		while (result[i])
		{
			printf("✔ - 1: Word %d: %s\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("✘ - 1: Erro ao dividir a string.\n");
	return (0);
}
*/