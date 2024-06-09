/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:11:22 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 10:03:26 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_mem;
	unsigned char	*s2_mem;
	size_t			i;
	int				result;

	i = 0;
	result = 0;
	s1_mem = (unsigned char *)s1;
	s2_mem = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1_mem[i] != s2_mem[i])
		{
			result = (unsigned char)s1_mem[i] - (unsigned char)s2_mem[i];
			return (result);
		}
		i++;
	}
	return (result);
}
