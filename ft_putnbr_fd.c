/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:08:11 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/23 16:08:13 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		else
			ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}
/*
int	main(void)
{
	int	i = 22;
	int	j = -47;
	int	min = -2147483648;
	int	max = 2147483647;
	
	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(j, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(min, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(max, 1);
}
*/
