/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:36:40 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/06/01 22:47:57 by hshi-yun         ###   ########.fr       */
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

int		start_index(char const *s1, const char *set)
{
	size_t	s1_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	i = 0;
	while (i < s1_len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break;
		i++;
	}
	return (i);
}
int		end_index(char const *s1, const char *set)
{
	size_t	s1_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	i = 0;
	while (i < s1_len)
	{
		if (ft_strchr(set, s1[s1_len - 1 - i]) == 0)
			break;
		i++;
	}
	return (s1_len - i);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
		
	int start = start_index(s1, set);
	int end = end_index(s1, set);

	if (start >= end)
		return (ft_strdup(""));
	
	str = malloc((end - start + 1) * sizeof(char));
	if (str)
	{
		ft_strlcpy(str, s1+ start, end - start + 1);
	}
	return (str);
}

