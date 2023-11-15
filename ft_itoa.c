/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:26:40 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/06 18:53:41 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	char	*ft_itoa(int n)
 *
 *		converte inteiro 'n' numa string caracteres
 *
 *	recebe: int n - o inteiro
 *	devolve: char* - ponteiro 'str' (string)
 *            		NULL erro na alocacao de memoria
*/

/*
 *	static int	ft_numlen(int num)
 *
 *		calcula o numero de digitos de 'num'
 *
 *	recebe: int num - o numero
 *	devolve: int len - numero de digitos de 'num'
*/

#include "libft.h"

static int	ft_numlen(int num)
{
	int	len;

	if (num > 0)
		len = 0;
	else
		len = 1;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	int long	num;
	char		*str;

	num = n;
	len = ft_numlen(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		*str = '0';
	else if (num < 0)
	{
		num = num * -1;
		*str = '-';
	}
	while (num > 0)
	{
		str[len--] = ('0' + (num % 10));
		num = num / 10;
	}
	return (str);
}

/*
int	main(void)
{
	int a[] = { 12345, 545356, 40458, 44, 78};
	int	i = 0;

	while (i < 5)
	{
		char *result = ft_itoa(a[i]);
		if (result != NULL)
		{
			printf("✔ - %d: (ft_itoa = %s)\n", i + 1, result);
			free(result);
		}
		else
			printf("✘ - %d: (ft_itoa = NULL)\n", i + 1);
		i++;
	}
	return (0);
}
*/