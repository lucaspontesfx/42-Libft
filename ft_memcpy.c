/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:45:24 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/25 12:45:35 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
	{
		return (NULL);
	}
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
/*
The function copies n bytes from memory
 area src to memory area dest.  The memory
areas must not overlap.

 The function returns a pointer to dest
{
	char	ds[] = "Lucas";
	char	sr[] = "aaaaa";
	printf("Dest before function: %s\n", ds);
	ft_memcpy(ds, sr, 5);
	printf("Dest after function call: %s", ds);
	return (0);
}
*/
