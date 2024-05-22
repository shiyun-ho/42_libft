/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:15:19 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/22 18:44:35 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* desc: Compares first n chars using two strings (s1, s2) using unsigned char
* params: s1, s2, n
* returns: integer (0, negative (s1 < s2), positive (s1 > s2)
*/

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] == s2[i] && i < n - 1)
	{
		result = (size_t)s1[i] - (size_t)s2[i];
		i++;
	}
	result = (size_t)s1[i] - (size_t)s2[i];
	return (result);
}
