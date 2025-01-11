/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:42:08 by lucda-si          #+#    #+#             */
/*   Updated: 2024/11/05 21:42:10 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	if (!str || !f)
	{
		return ;
	}
	index = 0;
	while (str[index])
	{
		f(index, &str[index]);
		index++;
	}
}
/*
#include <stdio.h>
#include "ft_toupper.c"

void	hash(unsigned int i, char *str)
{
	i = 0;
	while (str[i])
	{
		str[i] = str[i] - 32;
		break;
	}
}
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_striteri(av[1], hash);
		printf("%s", av[1]);
	}
	return (0);
}

void	neo_uppercase(unsigned int i, char *str)
{
	i = 0;
	while (str[i])
	{
		str[i] = '#';//ft_toupper(str[i]);
		i++;
	}
}

int	main(void)
{
	char	name[] = "Lucas da Silva Pontes";
	printf("name before function: %s\n", name);
	ft_striteri(name, neo_uppercase);
	printf("name after function: %s\n", name);
	return (0);
}
*/