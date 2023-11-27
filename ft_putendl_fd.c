/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarte.rrd <ruiduarte.rrd@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:14:48 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/27 10:59:04 by ruiduarte.r      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void ft_putendl_fd(char *s, int fd)
 *
 *      escreve 's' seguida de '\n' no descritor de arquivo 'fd'
 *	
 *	recebe: char *s - a string
 *	        int fd - o descritor de arquivo onde a string sera escrita
 *	devolve: void
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s || fd < 0)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

/*
int	main(void)
{
	char str[] = "Hello, World!";
	int fd = 1; // 1 - saida padrao (stdout), terminal

	printf("✔ - 1: (string '%s')\n", str);
	ft_putendl_fd(str, fd);
	return (0);
}
*/
