/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:07:56 by lucda-si          #+#    #+#             */
/*   Updated: 2024/11/05 21:10:58 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	size;
	size_t	index;

	if (!str || !f)
	{
		return (NULL);
	}
	size = ft_strlen(str);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
	{
		return (NULL);
	}
	index = 0;
	while (index < size)
	{
		res[index] = (*f)(index, str[index]);
		index++;
	}
	res[index] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include "ft_strlen.c"

char	neo_tolower(unsigned int i, char c)
{
	i = 0;
	while (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		i++;
	}
	return (c);
}
int	main(void)
{
	char	name[] = "LUCAS";
	char	*res;
	
	res = ft_strmapi(name, neo_tolower);
	
	printf("%s\n", res);
	return (0);
}
Tried to implement ac, av, but failed, I will have to 
try more again.

int	main(int ac, char **av) Todo
{
	if (ac == 2)
	{
		ft_strmapi(av[1], neo_tolower);
		printf("%s\n", av[1]);
		return (0);
	}
}
*/