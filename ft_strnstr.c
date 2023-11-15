/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:55:39 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:58:07 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	char	*ft_strnstr(const char *big, const char *little, size_t len)
 *
 * 		procura a primeira ocorrencia de 'little' em 'big', considerando no 
 * 		maximo 'len' caracteres
 *	
 *	recebe: const char *big - pointer para 'big'
 *	        const char *little - pointer para 'lettle'
 *	        size_t len - maximo de caracteres a procurar na 'big'
 *	devolve: char* - pointer para a primeira ocorrencia de 'little' em 'big'
 *            		NULL se 'little' nao for encontrado ou 'little' e vazia
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && big[i] != '\0')
	{
		while (big[i + j] == little[j] && i + j < len
			&& big[i + j] != '\0' && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	big[] = "Hello, World!";
	const char	little[] = "or";
	size_t		len = strlen(big);
	char		*n = ft_strnstr(big, little, len);

	if (n != NULL)
		printf("✔ - 1: Encontrado em: '%s'\n", n);
	else
		printf("✘ - 1: Substring nao encontrada.\n");
	return (0);
}
*/