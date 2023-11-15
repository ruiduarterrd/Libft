/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:27:27 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:57:54 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
 *
 * 		aplica a funcao 'f' a cada caractere da string 's' e cria uma nova 
 * 		string com os resultados
 *	
 *	recebe: char const *s - pointer para 's'
 *	        char (*f)(unsigned int, char) - pointer para a funcao 'f'
 *	devolve: char* - pointer para a nova string resultante
 *					NULL falhar a alocacao de memoria
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char	aux(unsigned int i, char c)
{
	(void)i;
	return (toupper(c));
}

int	main(void)
{
    char	str[] = "Hello, world!";
    char	*n = ft_strmapi(str, &aux);

	printf("✔ - 1: (ft_strmapi = '%s')\n", n);
	free(n);
	return (0);
}
*/