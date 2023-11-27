/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarte.rrd <ruiduarte.rrd@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 05:11:27 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/27 10:01:08 by ruiduarte.r      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	void	ft_lstadd_back(t_list **lst, t_list *new)
 *
 *		adiciona o elemento 'new' no final da lista 'lst'
 * 
 *	recebe: t_list **lst - pointer para o inicio da lista
 *   		t_list *new - elemento a ser adicionado no final da lista
 *	devolve: nada
 */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
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
    ft_lstadd_back(&my_list, node1);
    ft_lstadd_back(&my_list, node2);
    ft_lstadd_back(&my_list, node3);
    printf("Lista apos adicionar elementos no final:\n");
    t_list *tmp = my_list;
    while (tmp != NULL)
    {
        printf("%p -> ", tmp->content);
        tmp = tmp->next;
    }
    printf("NULL\n");
    free(node1);
    free(node2);
    free(node3);
    return (0);
}
*/