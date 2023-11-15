/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:50:44 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:58:00 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	int	ft_strncmp(const char *s1, const char *s2, size_t n)
 *
 *		compara ate 'n' caracteres de 's1' e 's2'
 *
 *	recebe: const char *s1 - pointer para 's1'
 *	        const char *s2 - pointer para 's2'
 *	        size_t n - numero de caracteres a comparar
 *	devolve: int - 0 se s1 = s2
 *	            1 se s1 > s2
 *	            -1 se s1 < s2
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n && *p1 && *p2 && *p1 == *p2)
	{
		p1++;
		p2++;
		n--;
	}
	if (n)
		return (*p1 - *p2);
	else
		return (0);
}

/*
int	main(void)
{
	char 	str1[] = "b";
	char 	str2[] = "a";
	size_t 	len = 1;
	int 	n = ft_strncmp(str1, str2, len);
	int 	n2 = strncmp(str1, str2, len);

	printf("✔ - 1: (ft_strncmp = '%d' | strncmp = '%d')\n", n, n2);
	return (0);
}
*/