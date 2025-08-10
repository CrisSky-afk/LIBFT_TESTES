/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiane <cristiane@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:59:51 by cristiane         #+#    #+#             */
/*   Updated: 2025/07/30 16:05:15 by cristiane        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_malloc(size_t size)
{
    void *ptr = malloc(size);
    if (!ptr)
        return (NULL);
    return (ptr);
}