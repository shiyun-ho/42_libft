/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:15:19 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 10:00:31 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* desc: Compares first n chars using two strings (s1, s2) using unsigned char
* params: s1, s2, n
* returns: integer (0, negative (s1 < s2), positive (s1 > s2)
*/

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			result = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (result);
		}
		i++;
	}
	return (result);
}
