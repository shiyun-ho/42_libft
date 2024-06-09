/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:48:22 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 10:14:30 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = n * size;
	if (total_size / size != n)
		return (NULL);
	ptr = malloc(total_size);
	if (n == 0 || size == 0 || !ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
