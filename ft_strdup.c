/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:27:17 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/29 19:27:20 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
The function returns a pointer to a new string 
which is a duplicate of the string s.  Memory 
for the new string is obtained with malloc(3), 
and must befreed with free(3).

The function returns a pointer to the duplicated
string.  It returns NULL if insufficient memory 
was available, with errno set to indicate the 
cause of the error.

#include <stdio.h>
#include "ft_strlen.c"

int	main(void)
{
	char	s1[] = "Lucas";
	char	*s2;

	// Original SRC
	printf("Original String: %s\n", s1);
	
	// Cpy src to dest using ft_strdup
	s2 = ft_strdup(s1);
	
	// Verify if memory allocation failed
	if (s2 == NULL)
	{
		printf("Error: Memory allocation failed\n");
		return (1);
	}

	// Print the memory copied
	printf("Copied string: %s\n", s2);

	// Free the memory
	free(s2);

	return (0);
}
ALternative main
int	main(void)
{
	char	s1[] = "Lucas";
	char	*s2;
	
	printf("%s\n", s1);
	s2 = printf("%s\n", ft_strdup(s1));
	printf("%c\n", s2);
	free(s2);
	return (0);

}
*/
