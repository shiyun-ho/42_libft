/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:15:19 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/28 19:05:43 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* desc: Compares first n chars using two strings (s1, s2) using unsigned char
* params: s1, s2, n
* returns: integer (0, negative (s1 < s2), positive (s1 > s2)
*/

#include <stddef.h>

// TODO: Does not stop at '\0'
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if(s1[i] != s2[i])
		{
			result = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (result);
		}
		i++;
	}
	return (result);
}
