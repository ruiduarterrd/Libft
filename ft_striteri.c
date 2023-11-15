/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:11:18 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:57:19 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	ft_striteri(char *s, void (*f)(unsigned int, char*))
 *
 *		aplica a funcao 'f' a cada caractere de 's', passa o indice do 
 *		caractere como primeiro argumento e depois o caractere
 *
 *	recebe: char *s - pointer para 's''
 *	        void (*f)(unsigned int, char*) - pointer para a 'f'
 *	devolve: void
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

/*
void	aux(unsigned int index, char *character)
{
	printf("str[%u] = '%c'\n", index, *character);
}

int	main(void)
{
	char	str[] = "Hello, World!";

	ft_striteri(str, &aux);
	printf("String apos aplicar ft_striteri: %s\n", str);
	return (0);
}
*/