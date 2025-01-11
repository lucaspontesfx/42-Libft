/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:01:10 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/31 11:01:12 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	mem1 = (unsigned char *)s1;
	mem2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (mem1[i] != mem2[i])
		{
			return (mem1[i] - mem2[i]);
		}
		i++;
	}
	return (0);
}
/*
The function compares the first n bytes 
(each interpreted as unsigned char) of 
the memory areas s1 and s2.

The function returns an integer less than,
equal to, or greater than zero if the first
n bytes of s1 is found, respectively, to be 
less than, to match, or be greater than the 
first n bytes of s2.

Same as above, in a fancy way.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
int	main(void)
{
	char	s1[] = "Lucbs";
	char	s2[] = "Lucas";
	
	printf("%d", ft_memcmp(s1, s2, 5));
	return (0);
}
*/
