/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 00:06:35 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/01 17:54:04 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @desc: Returns a pointer to new string is a duplicate of string s
*           Memory for new str is obtained with malloc
*           Memory can be freed with free
* @return: SUCCESS -> returns pointer to duplicated string
			If memory is insufficient
				->return NULL (with errno set to indicate error)
*/
char	*ft_strdup(const char *s)
{
	char	*s2;

	s2 = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s, ft_strlen(s) + 1);
	return (s2);
}
// #include <stdio.h>

// int main(void)
// {

// 	printf("%s", ft_strdup("hello"));
// 	return (0);
// }