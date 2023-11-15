/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:42:47 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/09 17:37:48 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	t_list	*ft_lstnew(void *content)
 *
 *      cria um novo elemento da lista
 *	
 *	recebe: const void *s1 - pointer 's1'
 *	        const void *src2 - pointer para 's2'
 *	        size_t n - numero de bytes a comparar
 *	devolve: t_list * - pointer para o novo elemento da lista
 *						NULL falhar a alocacao de memoria
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
int	main(void)
{
	char	*s = "Hello, world!";
	t_list	*new =ft_lstnew((void *)s);

	if (new != NULL)
	{
		printf("Conteudo: '%s'\n", (char *)new->content);
		printf("Proximo node address: '%p'\n", (void *)new->next);
		free(new);
	}
	else
		printf("Erro ao criar new\n");
	return (0);
}
*/