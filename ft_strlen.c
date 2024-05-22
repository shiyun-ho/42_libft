/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:49:38 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/05/22 18:10:58 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/* 
* @param: *s 
* @desc: Calculates length of string pointed by s
* 		 Excludes terminating '\0'
* @returns: number of bytes in string pointed by s
*/
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
