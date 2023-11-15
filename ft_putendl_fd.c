/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:14:48 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:55:51 by ruirodri         ###   ########.fr       */
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
	if (s == NULL)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
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