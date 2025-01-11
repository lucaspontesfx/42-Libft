/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <lucda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:41:09 by lucda-si          #+#    #+#             */
/*   Updated: 2024/11/12 20:24:24 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*The function adds a new node on the first position of the list

#include <stdio.h>
#include "ft_lstnew.c"
#include "ft_strdup.c"
#include "ft_strlen.c"

int	main(void)
{
	t_list	*begin = NULL;

	t_list	*nod1 = ft_lstnew(ft_strdup("LALA"));
	t_list	*nod2 = ft_lstnew(ft_strdup("POW"));

	ft_lstadd_front(&begin, nod2);

	printf("first node %s at the adress %p\n",
		(char *)begin->content, (void *)begin->content);

	ft_lstadd_front(&begin, nod1);

	printf("second node %s at the adress %p\n",
		(char *)begin->next->content, (void *)begin->next->content);
	
	free(nod1->content);
	free(nod2->content);
	free(nod1);
	free(nod2);

	return (0);
}
*/