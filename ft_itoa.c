/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:33:28 by lucda-si          #+#    #+#             */
/*   Updated: 2024/11/04 09:33:31 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int		size;
	long	number;

	size = 1;
	number = n;
	if (n < 0)
	{
		number = -number;
		size++;
	}
	while (number >= 10)
	{
		number = number / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	number;
	int		size;

	number = n;
	if (n < 0)
	{
		number = -number;
	}
	size = get_size(n);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	if (n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';
	res[size--] = '\0';
	while (number > 0)
	{
		res[size--] = number % 10 + '0';
		number = number / 10;
	}
	return (res);
}
/*
int	main(void)
{
	char	*str;

	str = ft_itoa(-56);
	printf("%s\n", str);
	free (str);

	return (0);
}
*/
