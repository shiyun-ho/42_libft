/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:23:07 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/06/01 17:51:14 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

/*
 * @desc: Allocates (with malloc(3)) & returns substr from str 's'
 *        Substr begins at index 'start' & is of max size 'len'
 *
 * @param: s: origin string to create substr
 * @param: start: start index of substr in the string 's'
 * @param: len: max length of substr
 *
 * @return: substr || if allocation fails > NULL
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;

	if (start > ft_strlen(s))
		len = 0;
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	sub_str = malloc((len + 1) * (sizeof(char)));
	if (!s || !sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}
// #include <stdio.h>

// int main()
// {
//     char s[] = "Hello";

//     printf("Trying ft_substr(s, 0, 4) from Hello: %s\n", ft_substr(s, 0, 4));
//     printf("Trying ft_substr(s, 0, 1) from Hello: %s\n", ft_substr(s, 0, 1));
//     printf("Trying ft_substr(s, 0, 0) from Hello: %s\n", ft_substr(s, 0, 0));
//     printf("Trying ft_substr(s, 0, 5) from Hello: %s\n", ft_substr(s, 0, 5));
// }