/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <lucda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:33:15 by lucda-si          #+#    #+#             */
/*   Updated: 2024/11/12 17:23:51 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_len(char const *str, char separator)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != separator)
		len++;
	return (len);
}

static void	free_str(char **word_splitted, size_t i)
{
	while (i--)
	{
		free(word_splitted[i]);
	}
	free(word_splitted);
}

size_t	ft_count_words(char const *str, char separator)
{
	size_t	words;
	int		in_word;

	words = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != separator && in_word == 0)
		{
			in_word = 1;
			words++;
		}
		else if (*str == separator)
		{
			in_word = 0;
		}
		str++;
	}
	return (words);
}

char	**place_words(char **words_v, const char *str, char c, size_t words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < words)
	{
		while (str[i] == c)
			i++;
		words_v[j] = ft_substr(str, i, ft_word_len(str + i, c));
		if (!words_v[j])
		{
			free_str(words_v, j);
			return (NULL);
		}
		i += ft_word_len(str + i, c);
		j++;
	}
	return (words_v);
}

char	**ft_split(char const *str, char c)
{
	size_t	words;
	char	**words_v;

	if (!str)
		return (NULL);
	words = ft_count_words(str, c);
	words_v = (char **)malloc(sizeof(char *) * (words + 1));
	if (!words_v)
		return (NULL);
	if (!place_words(words_v, str, c, words))
	{
		return (NULL);
	}
	words_v[words] = NULL;
	return (words_v);
}
/*
This function Allocates (with malloc(3)) 
and returns an array of strings obtained 
by splitting ’s’ using the character ’c’ 
as a delimiter. The array must end
with a NULL pointer.

The function returns an array of new strings
resulting from the split or NULL if the allocation
fails.

#include <stdio.h>
#include "ft_substr.c"
#include "ft_strlen.c"
#include "ft_calloc.c"
#include "ft_bzero.c"

int	main(void)
{
    char str1[] = "   You will overcome!   ";
    char str2[] = "Split,with,different,separators";
    char str3[] = "////Multiple///delimiters///in/a/row";
    char str4[] = ""; // String vazia
    char separator1 = ' ';
    char separator2 = ',';
    char separator3 = '/';

    char **result;
    size_t i;

    // Test 1: string with spaces as delimeter
    printf("Teste 1:\n");
    result = ft_split(str1, separator1);
    if (result)
    {
        for (i = 0; result[i] != NULL; i++)
        {
            printf("Word %zu: <%s>\n", i, result[i]);
            free(result[i]); 
        }
        free(result); // free the array
    }

    // Test 2: string with comas as delimeter
    printf("\nTest 2:\n");
    result = ft_split(str2, separator2);
    if (result)
    {
        for (i = 0; result[i] != NULL; i++)
        {
            printf("Word %zu: <%s>\n", i, result[i]);
            free(result[i]);
        }
        free(result);
    }

    // Teste 3: string with multiple delimeters
    printf("\nTest 3:\n");
    result = ft_split(str3, separator3);
    if (result)
    {
        for (i = 0; result[i] != NULL; i++)
        {
            printf("Word %zu: <%s>\n", i, result[i]);
            free(result[i]);
        }
        free(result);
    }

    // Teste 4: empty string
    printf("\nTeste 4:\n");
    result = ft_split(str4, separator1);
    if (result)
    {
        if (result[0] == NULL)
            printf("Array empty\n");
        else
            for (i = 0; result[i] != NULL; i++)
                printf("Word %zu: <%s>\n", i, result[i]);

        free(result); // Free the empty array
    }

    return 0;
}

#include <stdio.h>
#include "ft_strlen.c"
#include "ft_substr.c"
int	main(int ac, char **av)
{
	char **arr = NULL;
	int	i = 0;
	
	arr = ft_split(av[1], av[2][0]);
	
	while (arr[i])
		printf("%s\n", arr[i++]);
	i = 0;
	while(arr[i])
		free(arr[i++]);
	free(arr);
	return(0);
}
*/
