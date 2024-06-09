/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:07:26 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 10:13:06 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
* @desc:    Returns a pointer to first occurrence of char c 
* @return:  Returns a pointer to the matched char
                OR NULL (if char not found)
            If c == '\0' -> Return pointer to terminator
*/
char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	character;

	i = 0;
	len = ft_strlen(s);
	character = (char)c;
	while (i <= len)
	{
		if (s[i] == character)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
