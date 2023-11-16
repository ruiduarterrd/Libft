/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 04:47:07 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/16 04:59:44 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	ft_lstadd_front(t_list **lst, t_list *new)
 *
 *		adiciona o elemento 'new' no inicio da lista 'lst'
 *
 *	recebe: t_list **lst -  pointer para o inicio da lista
 *   		t_list *new - elemento a ser adicionado no inicio da lista
 *	devolve: nada
 */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	new->next = *lst;
	*lst = new;
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
	node1->next = NULL;
	node2->next = NULL;
	node3->next = NULL;
	t_list *my_list = NULL;
	ft_lstadd_front(&my_list, node3);
	ft_lstadd_front(&my_list, node2);
	ft_lstadd_front(&my_list, node1);
	printf("Lista apos adicionar elementos a frente:\n");
	while (my_list)
	{
		printf("%p -> ", my_list->content);
		my_list = my_list->next;
	}
	printf("NULL\n");
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/