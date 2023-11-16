/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 05:33:19 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/16 15:19:52 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	static char	*ft_strupper(char *s)
 *
 *		converte todos os caracteres minusculos de uma string para maiusculos
 * 
 *	recebe: char *s - string na qual a conversao sera realizada
 *	devolve: pointer para a string apos a conversao
 */

/*
 *	void	ft_lstiter(t_list *lst, void (*f)(void *))
 *
 *		aplica a funcao 'f' a cada no da lista 'lst'
 * 
 *	recebe: t_list *lst - pointer para o inicio da lista
 *   		void (*f)(void *) - pointer para a funcao a ser aplicada a cada no 
 * 							da lista
 *	devolve: nada
 */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*
static char	*ft_strupper(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

void ft_strupper_void(void *s)
{
	ft_strupper((char *)s);
}

void print_string(void *content)
{
	char *str = (char *)content;
	printf("%s -> ", str);
}

int main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	if (!node1 || !node2 || !node3)
	{
		printf("Erro ao alocar memoria para os nos.\n");
		free(node1);
		free(node2);
		free(node3);
		return (1);
	}
	char str1[] = "hello";
	char str2[] = "world";
	char str3[] = "example";
	node1->content = str1;
	node2->content = str2;
	node3->content = str3;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	ft_lstiter(node1, ft_strupper_void);
	printf("Lista apos aplicar ft_strupper:\n");
	ft_lstiter(node1, print_string);
	printf("NULL\n");
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/