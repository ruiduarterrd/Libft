/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 05:26:34 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/27 16:37:40 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	ft_del(void *content)
 *
 *		responsavel por liberar a memoria associada ao conteudo de um no da 
 *		lista
 *
 *	recebe: void *content - o conteudo a ser libertado da memoria
 *	devolve: nada
 */

/*
 *	void	ft_lstclear(t_list **lst, void (*del)(void *))
 *
 *		apaga e liberta a memoria de todos os nos da lista 'lst' e o conteudo 
 *		associado
 * 
 *	recebe: t_list **lst: pointer para o inicio da lista
 *   		void (*del)(void *) - pointer para a funcao que apaga o conteudo do
 * 								no
 *	devolve: nada
 */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
}

/*
static void	ft_del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	int *content1 = malloc(sizeof(int));
	int *content2 = malloc(sizeof(int));
	int *content3 = malloc(sizeof(int));
	if (!node1 || !node2 || !node3 || !content1 || !content2 || !content3)
	{
		printf("Erro ao alocar memó\oria para os nos ou conteudo.\n");
		free(node1);
		free(node2);
		free(node3);
		free(content1);
		free(content2);
		free(content3);
		return (1);
	}
	*content1 = 1;
	*content2 = 2;
	*content3 = 3;
	node1->content = content1;
	node2->content = content2;
	node3->content = content3;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	ft_lstclear(&node1, ft_del);
	printf("Lista limpa com sucesso.\n");
	return (0);
}
*/