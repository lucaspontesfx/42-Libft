/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <lucda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:58:13 by lucda-si          #+#    #+#             */
/*   Updated: 2025/01/11 11:18:10 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*n_node;

	n_node = (t_list *)malloc(sizeof(t_list));
	if (!n_node)
		return (NULL);
	n_node->content = content;
	n_node->next = NULL;
	return (n_node);
}
/*
int	main(void)
{
	char	*data = "Hello, Linkded list!";
	t_list	*node;

	node = ft_lstnew(data);
	if (!node)
	{
		printf("Failed to create the node\n");
		return (1);
	}
	printf("Node content: %s\n", (char *)node->content);
	printf("Node next: %p\n", (char *)node->next);

	free(node);
	return (0);

}*/
