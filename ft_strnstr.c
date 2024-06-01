/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:22:43 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/06/01 16:54:03 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * @ desc: Locates first occurrence of null-terminated str little in str big
 * 			where not more than len characters are searched
 *			Characters that appear after '\0' are not searched
 * @ param: str, str, size_t
 * @ return: little ("") -> return *big
 *			little (cannot be found in BIG) -> return NULL
 *			OTHERWISE -> pointer to first char of first occurrence of little
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0' || big == little)
	{
		return ((char *)big);
	}
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			while (big[i + j] == little[j] && i + j < len && little[j] != '\0')
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
