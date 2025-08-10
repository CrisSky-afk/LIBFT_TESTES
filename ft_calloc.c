/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:18:28 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/05 19:33:52 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, (nmemb * size));
	return (ptr);
}

// int main(void)
// {
//     int i = 0;
//     char *str = ft_calloc(10, sizeof(char)); // aloca e zera 10 chars
//     if (!str)
//     {
//         printf("Falha na alocação!\n");
//         return 1;
//     }

//     while (i < 10)
//     {
//         i++;
//         printf("%d ", str[i]);
//     }

//     // Lembre de liberar depois
//     free(str);

//     return 0;
// }