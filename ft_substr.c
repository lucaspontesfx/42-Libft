/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:51:28 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/29 21:51:31 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	size_t	size_str;
	char	*str;

	size_str = ft_strlen(s);
	if (!s)
	{
		return (NULL);
	}
	if (start >= (unsigned int)ft_strlen((char *)s))
	{
		str = (char *)ft_calloc(1, sizeof(char));
		return (str);
	}
	if (len > size_str - start)
		len = size_str - start;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start] && len--)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
/*
#include "ft_calloc.c"
#include "ft_bzero.c"
#include <stdio.h>
int	main()
{
	char	f_name[] = "Jhon Carter";
	char	*name;
	
	printf("%s\n", f_name);
	name = ft_substr(f_name, 6, 4);
	printf("%s\n", name);
	free(name);
	return (0);
}
*/
