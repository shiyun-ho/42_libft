/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:36:40 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/06/02 23:35:45 by shiyun           ###   ########.fr       */
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


char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	int left_ptr = 0;
	int right_ptr = ft_strlen(s1) - 1; //points to end index
	//First find where left_ptr will end in terms of last occurrence of set in s1
	size_t i = 0;
	while (i < ft_strlen(s1))
	{
		while (ft_strrchr(set, s1[i]) == NULL) 
			break;
		i++;
	}
	right_ptr = i;
	i = right_ptr;
	while (i > 0)
	{
		while (ft_strrchr(set, s1[i]) == NULL) 
			break;
		i--;
	}
	left_ptr = i;
	if (right_ptr >= left_ptr)
		return (ft_strdup(""));
	//Allocate memory using malloc
	str = malloc(sizeof(char));
	//if mem allocation fails, set return null
	if (str == NULL)
		return NULL;
	//else, copy from s1[0] + left_ptr position, for r - l _+ 1 position
	str = (char*) ft_strlcpy(str, s1 + left_ptr, right_ptr - left_ptr + 1);
	//Return copy of s1 without chars in set at beginning and at the end of str
	return (str);
}

