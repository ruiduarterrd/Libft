/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:47:52 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/20 08:04:47 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	int	ft_memcmp(const void *s1, const void *s2, size_t n)
 *
 *      compara os primeiros 'n' bytes de 's1' e 's2'
 *	
 *	recebe: const void *s1 - pointer 's1'
 *	        const void *src2 - pointer para 's2'
 *	        size_t n - numero de bytes a comparar
 *	devolve: int - 0 se s1 = s2
 *	            	1 se s1 > s2
 *	           		-1 se s1 < s2
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*(unsigned char *)s1 == *(unsigned char *)s2 && n > 1)
	{
		n--;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*
int main(void)
{
	char    str1[] = "Hella";
	char    str2[] = "Hello";
	size_t  n = 5;
	int	s1 = ft_memcmp(str1, str2, n);
	int s2 = memcmp(str1, str2, n);

	if (s1 == s2)
		printf ("✔ - 1: (ft_memcmp = %d | memcmp = %d)\n", s1, s2);
	else
		printf ("✘ - 1: (ft_memcmp = %d | memcmp = %d)\n", s1, s2);
	return (0);
}
*/
