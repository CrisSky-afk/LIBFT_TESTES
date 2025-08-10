/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiane <cristiane@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:52:43 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/10 13:21:40 by cristiane        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	str = malloc((end - start + 1) + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + start, end - start + 1);
	str[end - start + 1] = '\0';
	return (str);
}

// int main (void)
// {
// 	char *str1 = "aaaaaaaaaaaaaaaaacriativaaaaaaaaaaa";
// 	char *str2 = "a";
// 	char *result = ft_strtrim(str1, str2);
// 	printf("%s\n", result);
// 	free(result);
// }