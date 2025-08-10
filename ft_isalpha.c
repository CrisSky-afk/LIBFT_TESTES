/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:40:52 by csuomins          #+#    #+#             */
/*   Updated: 2025/07/19 17:56:27 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int main (void)
// {
// 	printf("%d\n", ft_isalpha('9'));
// 	printf("%d\n", ft_isalpha('u'));
// 	printf("%d\n", ft_isalpha('R'));
// 	return (0);
// }
