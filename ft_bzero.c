/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:54:34 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/25 11:54:38 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	name[] = "Cgoat";
	printf("String name befor function call: %s\n", name);
	ft_bzero(name, 1);
	printf("String name after function call: %s\n", name);
	printf("Chars on each byte bellow \n");
	printf("%c", name[0]);
	printf("%c", name[1]);
	printf("%c", name[2]);
	printf("%c", name[3]);
	return (0);
}
*/
