/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarte.rrd <ruiduarte.rrd@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:24:34 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/27 10:58:35 by ruiduarte.r      ###   ########.fr       */
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

/* void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			ft_putnbr_fd(147483648, fd);
		}
		else
			ft_putnbr_fd(-n, fd);
	}
	if (n >= 0)
	{
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
			ft_putchar_fd(n + 48, fd);
	}
} */

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
