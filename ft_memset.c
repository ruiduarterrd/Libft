/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:27:01 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:55:38 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	*ft_memset(void *s, int c, size_t n)
 *
 *      preenche os primeiros 'n' bytes de 's' com o caractere 'c'
 *	
 *	recebe: void *s - pointer para 's'
 *	        int c - o caractere
 *	        size_t n - numero de bytes a preencher
 *	devolve: void* - pointer para 's'
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		*p = (char)c;
		p++;
		n--;
	}
	return ((void *)s);
}

/*
int main(void) 
{
	char 	str[] = "Hello, World!";
	char 	str2[] = "Hello, World!";
	int 	c = '*';
	size_t 	n = 5;

	ft_memset(str, c, n);
	memset(str2, c, n);
	if (strcmp(str, str2) == 0)
		printf("✔ - 1: (ft_memset = '%s' | ft_memset = '%s')\n", str, str2);
	else
		printf("✘ - 1: (ft_memset = '%s' | ft_memset = '%s')\n", str, str2);
	return (0);
}
*/