/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 05:06:00 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/16 05:15:07 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	t_list	*ft_lstlast(t_list *lst)
 *
 *		encontra o ultimo elemento da lista 'lst' e retorna um pointer para ele
 *		se a lista estiver vazia, retorna NULL
 *
 *	recebe: t_list *lst: pointer para o inicio da lista
 *	devolve: t_list lst - pointer para o ultimo elemento da lista 'lst'
 *						NULL se a lista estiver vazia
 */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst != NULL && lst->next != (void *)0)
		lst = lst->next;
	return (lst);
}

/*
int main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	node1->content = (void *)1;
	node2->content = (void *)2;
	node3->content = (void *)3;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	t_list *last_node = ft_lstlast(node1);
	if (last_node)
		printf("Conteudo do ultimo no: %p\n", last_node->content);
	else
		printf("Lista vazia.\n");
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/