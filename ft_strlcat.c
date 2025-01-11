/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:39:28 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/26 12:39:31 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dest && size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	j = dest_len;
	i = 0;
	if (dest_len < size - 1 && size > 0)
	{
		while (src[i] && j < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}
/*
The function safely concatanate the string src
to the end of dest, esuring that the result is 
Null terminated, as long as there is at least
ine byte of space in dest. It takes the total 
buffer size of dest as an argument, not just
the space available, and adds as many characters
as possible from src, without exceeding size - 1
to leave the space to the Null terminator.

The function returns the total len that the new
string would have if there were enough space in
dest for the entire src.

#include <stdio.h>
#include "ft_strlen.c"
int	main(void)
{
	char	s1[] = "Lucas";
	char	s2[] = " Pontes";
	printf("Dest before function call: %s\n", s1);
	printf("Dest size before function call: %li\n", ft_strlen(s1));
	ft_strlcat(s1, s2, 20);
	printf("Dest after function call: %s\n", s1);
	printf("Dest size after function call: %li\n", ft_strlen(s1));
	return (0);
}
*/