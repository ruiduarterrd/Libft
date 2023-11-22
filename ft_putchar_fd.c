/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 00:57:17 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:55:44 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	ft_putchar_fd(char c, int fd)
 *
 *      escreve o caractere 'c' no descritor de arquivo 'fd'
 *
 *	recebe: char c - o caractere 
 *	        int fd - o descritor de arquivo
 *	devolve: void
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/*
int main(void)
{
	char	c = 'X';
	int		fd = 1; // 1 - saida padrao (stdout), terminal

	printf("✔ - 1: (ft_putchar_fd = ");
	ft_putchar_fd(c, fd);
	printf(" )\n");
	return (0);
}
*/
