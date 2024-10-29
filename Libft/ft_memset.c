/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:37:21 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/24 12:37:23 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*
int	main()
{
	char	name[] = "Lucas";
	char	buff = 'C';
	printf("String before function: %s\n", name);
	ft_memset(name, buff, 3);
	printf("String after function call: %s", name);
	return (0);
}

This works similar but it will change the original behavior.
This will stop to fill the bytes if it finds a null char 
this is not how the function works.
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;
	
	ptr = (char *)s;
	i = 0;
	while (ptr[i] != '\0' && i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
*/
