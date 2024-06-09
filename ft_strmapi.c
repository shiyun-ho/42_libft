/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:45:37 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 09:50:15 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
* @desc: Applies function f to each char of string s
*           Pass its index as arg1, char itself as arg2
* @return: string created from successive application of 'f'
*              Allocation fail > NULL
* @param: s - string to iterate on
*         f - function to apply to each char
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	str_len;
	char			*str;

	str_len = ft_strlen(s);
	str = malloc((str_len + 1) * sizeof(char));
	if (!str || !s)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
