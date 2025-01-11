/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:27:33 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/29 18:27:40 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if ((nmemb > 2147483647 && size != 0) || (size > 2147483647 && nmemb != 0))
	{
		return (0);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int	main(void)
{
	size_t	i;
	size_t	nmemb = 0;
	size_t	size = sizeof(int);
	
	int	*array = (int *)ft_calloc(nmemb, size);
	
	if (array == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	i = 0;
	while (i < nmemb)
	{
		printf("Array[%zu] = %d\n", i, array[i]);
		i++;
	}
	free(array);
	return (0);
}
*/
