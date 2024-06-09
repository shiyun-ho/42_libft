/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:00:31 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 10:18:52 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_mem;
	size_t			i;
	unsigned char	compared_c;

	s_mem = (unsigned char *)s;
	compared_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_mem[i] == compared_c)
			return ((void *)&s_mem[i]);
		i++;
	}
	return (NULL);
}
