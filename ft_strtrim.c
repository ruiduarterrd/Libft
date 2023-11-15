/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:45:41 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:58:24 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	char	*ft_strtrim(char const *s1, char const *set)
 *
 *		remove os caracteres presentes em 'set' do inicio e no final de 's1'
 *	
 *	recebe: char const *s1 - pointer para 's1'
 *	        char const *set - conjunto de caracteres a serem removidos
 *	devolve: char* - pointer para a nova string resultante
 *					NULL falhar a alocacao de memoria
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] && ft_strchr(set, s1[j]))
		j--;
	str = ft_substr(s1, i, (j - i) + 1);
	return (str);
}

/*
int	main(void)
{
	char 	s1[] = "   Hello, World!   ";
	char 	set[] = " ";
	char	*n = ft_strtrim(s1, set);

	printf("✔ - 1: (ft_strtrim = '%s' | str = '%s')\n", n, s1);
	free(n);
	return (0);
}
*/