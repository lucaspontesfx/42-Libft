/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:59:08 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/30 12:59:11 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	size;
	char	*dest;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	size = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
	{
		return (NULL);
	}
	i = -1;
	j = 0;
	while (s1[++i] != '\0')
		dest[i] = s1[i];
	while (s2[j] != '\0')
		dest[i++] = s2[j++];
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*string = "1234";
	char	*string2 = "abc";
	char	*name;

	
	name = ft_strjoin(string, string2);
	printf("%s\n", name);
	
	printf("%c", name[0]);
	printf("%c", name[1]);
	printf("%c", name[2]);
	printf("%c", name[3]);
	printf("%c", name[4]);
	printf("%c", name[5]);
	printf("%c", name[6]);
	printf("%c", name[7]);
	printf("%c", name[8]);
	printf("%c", name[9]);
	printf("%c", name[10]);
	printf("%c", name[11]);
	printf("%c", name[12]);
	printf("%c", name[13]);
	printf("%c", name[14]);

	return (0);
}
*/
