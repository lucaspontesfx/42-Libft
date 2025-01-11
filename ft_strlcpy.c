/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:30:23 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/22 22:30:50 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!size)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (src[i] != '\0' && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
The function copies up to size - 1
characters from the NUL-terminated 
string src to dst, NUL-terminating 
the result.

Return the total len of the string we
will try to create. The total len of src.
(Important) We must return the len of src, 
because we need to inform the len of the 
srting that will be copied in the destination.

#include <stdio.h>
#include "ft_strlen.c"

int	main(void)
{
	char	name[] = "There we go";
	const	char	nami[] = "You will get w";
	printf("%zu\n",ft_strlcpy(name, nami, 3));
	printf("%s", name);
	return (0);
}
*/
