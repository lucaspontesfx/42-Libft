/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:23:45 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/30 18:23:53 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	j;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed)
		return (NULL);
	j = 0;
	while (start < end)
	{
		trimmed[j] = s1[start];
		j++;
		start++;
	}
	trimmed[j] = '\0';
	return (trimmed);
}
/*
int	main(void)
{
	
	
	//char	*nome = NULL;
	char	name[] = "bbaabbaaaa1aaaaa2bbbbb3aaabbaab";
	char	trsh[] = "a";
	char	*trimmed;
	
	trimmed = ft_strtrim(name, trsh);
	printf("%s\n\n\n", trimmed);
	free(trimmed);
	
	//Test2 no char to remove
	char name2[] = "aaaaasbbb123456aaaaaabbb";
	char trsh2[] = "ab";
	trimmed = ft_strtrim(name2, trsh2);
	if (trimmed)
	
	return (0);
}
*/
