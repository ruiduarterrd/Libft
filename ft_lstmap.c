/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarte.rrd <ruiduarte.rrd@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 05:46:56 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/27 10:37:23 by ruiduarte.r      ###   ########.fr       */
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
	t_list	*new;
	t_list	*temp;

	new = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&temp, del);
			break ;
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}
