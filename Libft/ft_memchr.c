/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:42:30 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/29 14:42:37 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (s == NULL || n == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
/*                  (s + i is   s[i] equivalent))
if (*(unsigned char *)(s + i) == (unsigned char)c)
		{
			return ((void *)(s + i));
		}
		i++;

int	main()
{
	char	name[] = "Gerars";
	char	c = 'd';
	char	*result = ft_memchr(name, c, 6);
	
	if (result != NULL)
	{
		printf("Char found: %s\n", result);
	}
	else
	{
		printf("No char %c found", c);
	}
	
	return (0);
}
*/
