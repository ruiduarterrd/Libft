/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 05:16:03 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/20 08:09:18 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	static void	ft_del(void *content)
 *
 *		responsavel por liberar a memoria associada ao conteudo de um no da 
 *		lista
 *
 *	recebe: coid *content - conteudo a ser liberado da memria
 *	devolve: nada 
 */

/*
 *	void	ft_lstdelone(t_list *lst, void (*del)(void *))
 *
 *		apaga um no especifico da lista 'lst'
 * 
 *	recebe: t_list *lst - no a ser apagado
 *   		void (*del)(void *) - pointer para a funcao que apaga o conteudo do
 * 								no
 *	devolve: nada
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free (lst);
}

/*
static void	ft_del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
	{
		printf("Erro ao alocar memoria para o no.\n");
		return 1;
	}
	int *content = malloc(sizeof(int));
	if (!content)
	{
		printf("Erro ao alocar memoria para o conteudo do no.\n");
		free(node);
		return (1);
	}
	*content = 42;
	node->content = content;
	node->next = NULL;
	ft_lstdelone(node, ft_del);
	printf("No apagado com sucesso.\n");
	return (0);
}
*/