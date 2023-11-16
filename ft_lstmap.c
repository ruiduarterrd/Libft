/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 05:46:56 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/16 15:22:54 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
 *
 *		cria uma nova lista aplicando a funcao 'f' a cada no da lista 'lst'
 * 
 *	recebe: t_list *lst - pointer para o inicio da lista original
 *   		void *(*f)(void *) - pointer para a funcao a ser aplicada a cada no
 * 							da lista
 *   		void (*del)(void *) - pointer para a funcao que limpa a lista se 
 * 							ocorrer um erro de alocacao de memoria.
 *	devolve: t_list * - pointer para o inicio da nova lista criada pela 
 *					aplicacao de 'f' a cada no da lista original 'lst'
 *     				falha na alocacao de memoria retorna NULL
 */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	head = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst -> content));
		if (!tmp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst -> next;
	}
	return (head);
}
