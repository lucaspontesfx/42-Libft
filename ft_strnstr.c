/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:41:03 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/29 15:41:10 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little[0])
	{
		return ((char *)big);
	}
	j = 0;
	while (j < len && big[j])
	{
		i = 0;
		while (j < len && little[i] && big[j] && little[i] == big[j])
		{
			++i;
			++j;
		}
		if (!little[i])
			return ((char *)&big[j - i]);
		j = j - i + 1;
	}
	return (0);
}
/*
j = j - i + 1;  not the same as j++; 
int	main(void)
{
	char	s1[] = "Lucas da Silva";
	char	s2[] = "da";
	printf("%s", ft_strnstr(s1, s2, 8));
	return (0);
}
*/
