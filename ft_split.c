/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarte.rrd <ruiduarte.rrd@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 03:37:37 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/27 11:02:32 by ruiduarte.r      ###   ########.fr       */
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
 *	static	int	ft_word_count(char const *s, char c)
 *
 *		conta o numero de palavras de 's' as palavras sao delimitadas por 'c'
 *
 *	recebe: char const *s - pointer para 's'
 *	        char c - caractere delimitador
 *	devolve: int - umero de palavras
*/

#include "libft.h"

static	int	ft_word_count(char const *s, char c)
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

	if (s == NULL)
		return (NULL);
	strs = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
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


// ver
/* static int	ft_wc(char const *s, char c)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			words++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (words);
}

static char	*ft_nw(char *s, char c)
{
	char	*s1;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	s1 = malloc (i + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (*s && *s != c)
		s1[i++] = *s++;
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	l;

	if (!s)
		return (NULL);
	while (*s && *s == c)
		s++;
	strings = (char **)malloc(sizeof(char *) * (ft_wc(s, c) + 1));
	if (!s || !strings)
		return (NULL);
	l = 0;
	while (*s)
	{
		if (*s != c)
		{
			strings[l++] = ft_nw((char *)s, c);
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	strings[l] = 0;
	return (strings);
} */