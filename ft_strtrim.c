/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:36:40 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/06/09 10:08:03 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
* @desc: Allocate using malloc
*		 Return a copy of 's1' with characters specified in 'set'
*		 removed from beginning and end of str
* @param: s1 (str to be trimmed), set (ref set of char to trim)
* @return: trimmed str || allocation fails > NULL
*/

size_t	find_ptr(char const *s1, char const *set, size_t s1_len, int direction)
{
	size_t	i;
	size_t	result;

	i = 0;
	while (i < s1_len)
	{
		if (direction == 1)
		{
			if (ft_strrchr(set, s1[i]) == NULL)
				break ;
			i++;
		}
		else if (direction == 0)
		{
			if (ft_strrchr(set, s1[s1_len - 1 - i]) == NULL)
				break ;
			i++;
		}
	}
	if (direction == 1)
		result = i;
	if (direction == 0)
		result = s1_len - i;
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	s1_len;
	size_t	left_ptr;
	size_t	right_ptr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	left_ptr = find_ptr(s1, set, s1_len, 1);
	right_ptr = find_ptr(s1, set, s1_len, 0);
	if (left_ptr >= right_ptr)
		return (ft_strdup(""));
	str = malloc((right_ptr - left_ptr + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (str)
		ft_strlcpy(str, s1 + left_ptr, right_ptr - left_ptr + 1);
	return (str);
}
