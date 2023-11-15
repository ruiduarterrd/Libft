/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:10:27 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:56:06 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	ft_putstr_fd(char *s, int fd)
 *
 *		escreve a string 's' no descritor de arquivo 'fd'
 *
 *	recebe: char *s - a string
 *	        int fd - o descritor de arquivo onde a string sera escrita
 *	devolve: void
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write (fd, s, ft_strlen(s));
}

/*
int main(void) 
{
	char *str = "Hello, World!";
	int fd = 1; // 1 - saida padrao (stdout), terminal

	printf("✔ - 1: (string '%s')\n", str);
	ft_putstr_fd(str, fd);
	return (0);
}
*/