/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:24:34 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 20:01:08 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	ft_putnbr_fd(int n, int fd)
 *
 *		escreve 'n' no descritor de arquivo 'fd'
 * 
 *	recebe: int n - o inteiro
 *	        int fd - o descritor de arquivo onde o inteiro sera escrito
 *	devolve: void
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	int		i;

	i = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while (n > 0)
	{
		buffer[i++] = '0' + (n % 10);
		n = n / 10;
	}
	while (i > 0)
		ft_putchar_fd(*(buffer + --i), fd);
}

/*
int main(void)
{
    int num = -2147483647;
    int fd = 1; // 1 - saida padrao (stdout), terminal
	
	printf("✔ - 1: %d impresso na saida padrao stdout, terminal\n", num);
    ft_putnbr_fd(num, fd);
    return (0);
}
*/