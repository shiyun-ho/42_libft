/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:51:14 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/05/22 18:11:22 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* @desc: Copy a string with truncation(i.e. cut off char/digit/bytes)
* - Copy input string to dest string & guarantees null termination
* - copies up to size - 1 characters from src to dst + \0
* - if (dest_buffer < cpy) -> resulting string truncated + \0
* @param: dst, src, size 
* @returns: total length of string tried to create (i.e. src)
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	return_len;

	i = 0;
	return_len = ft_strlen(src);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (return_len);
}
