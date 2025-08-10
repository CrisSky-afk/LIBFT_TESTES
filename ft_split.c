/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiane <cristiane@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 17:20:44 by cristiane         #+#    #+#             */
/*   Updated: 2025/08/09 21:25:54 by cristiane        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *str, char c)
{
	size_t		count;

	if (!*str || !str)
		return (0);
	count = 0;
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str != '\0' && *str != c)
		{
			count++;
			while (*str != '\0' && *str != c)
				str++;
		}
	}
	return (count);
}

static char	**ft_fill_result(const char *s, char c, char **result)
{
	size_t		word_len;
	size_t		i;

	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			result[i] = ft_substr(s, 0, word_len);
			if (!result[i])
			{
				while (i > 0)
					free(result[--i]);
				free (result);
				return (NULL);
			}
			s += word_len;
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**words;

	if (!s)
		return (NULL);
	word_count = ft_countword(s, c);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);
	return (ft_fill_result(s, c, words));
}

// char	**ft_split(char const *s, char c)
// {
// 	char		**result;

// 	if (!s)
// 		return (NULL);
// 	result = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
// 	if (!result)
// 		return (NULL);
// 	if (!ft_fill_result(s, c, result))
// 	{
// 		free(result);
// 		return (NULL);
// 	}
// 	return (result);
// }

// int main (void)
// {
// 	const char *str1 = "split  ||this|for|me|||||!|";
// 	char c = '|';
// 	char **result;
// 	size_t i = 0;
// 	size_t		wordlen = ft_countword(str1, c);
// 	result = (char **)malloc(sizeof(char *) * (wordlen + 1));
// 	char **teste = ft_fill_result(str1, c, result);

// 	while (i < wordlen)
// 	{
// 		printf("%s\n", teste[i]);
// 		i++;
// 	}
// 	return (0);
// }

