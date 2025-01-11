/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:16:07 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/23 20:16:09 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)&(str[i]));
		}
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "testesefgndo";
	char	name = 'e';
	
	printf("%s", ft_strrchr(str, name));
	return (0);
}
*/
