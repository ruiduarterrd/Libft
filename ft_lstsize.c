/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 04:58:27 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/16 05:05:35 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	int	ft_lstsize(t_list *lst)
 *
 *		conta o numero de elementos na lista 'lst'
 *
 *	recebe: t_list *lst -  pointer para o inicio da lista
 * 	devolve: int count - numero de elementos na lista 'lst'
 */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
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
    int size = ft_lstsize(node1);
    printf("Tamanho da lista: %d\n", size);
    free(node1);
    free(node2);
    free(node3);
    return (0);
}
*/