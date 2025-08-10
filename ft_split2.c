/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiane <cristiane@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:26:28 by cristiane         #+#    #+#             */
/*   Updated: 2025/08/09 22:39:03 by cristiane        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *str, char c)
{
	size_t		count;

	if (!str)
		return (0);
	count = 0;
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str != '\0')
		{
			count++;
			while (*str != '\0' && *str != c)
				str++;
		}
	}
	return (count);
}

static char *ft_aloca_copia(const char *s, char c)
{
    size_t      word_len;
    size_t      *word;

    if (!s)
        return (NULL);
    word_len = 0;
    while (s[word_len] != '\0' && s[word_len] != c)
        word_len++;
    word = malloc (word_len + 1);
    if (!word)
        return (NULL);
    ft_memcpy(word, s, word_len);
    word[word_len] = '\0';
    return (word);
}

static void	ft_freesplit(char **arr, size_t count)
{
	while (count > 0)
	{
		free(arr[--count]);
	}
	free(arr);
}

static char **ft_aloca_memoria(const char *s, char c)
{
    size_t     word_count;
    char       **result;

    if (!s)
        return (NULL);
    word_count = ft_countword(s, c);
    result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;

	if (!s || !result)
		return (NULL);
	result = ft_aloca_memoria(s, c);
	i = 0;
    while (*s)
    {
		while (*s == c)
			s++;
		if (*s)
        {
			result[i] = ft_aloca_copia(s, c);
			if (!result[i])
            {
	            ft_freesplit(result, i);
	            return (NULL);
            }
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}
