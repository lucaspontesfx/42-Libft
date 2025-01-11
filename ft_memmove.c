/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:54:58 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/26 10:55:01 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}
/*
The function copies n bytes from memory 
area src to memory area dest.
The memory areas may overlap: copying takes
place as though the bytes in src are first
copied into a temporary array that does not 
overlap src or dest, and the bytes are then 
copied from the temporary array to dest.

The function returns a pointer to dest.

int	main(void)
{
	char	s1[] = "Foi pro samba";
	char	s2[] = "Carolina";
	printf("Dest before function call: %s\n", s1);
	ft_memmove(s1, s2, 7);
	printf("Dest after function call: %s", s1);
	return (0);
}
*/
