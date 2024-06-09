/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:23:07 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/06/09 21:08:15 by hshi-yun         ###   ########.fr       */
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

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (start >= 4294967295)
		return (ft_strdup(""));
	else if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	sub_str = ft_calloc((len + 1) * (sizeof(char)), sizeof(char));
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}