/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:55:38 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/06/01 17:52:41 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @description: Allocate with malloc & return new str
 *                -> str = concat(s1, s2)
 * @param: s1 (prefix str). s2(suffix str)
 * @return: new string || allocation fails > NULL
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s_new;
	unsigned int	s_size;

	s_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	s_new = malloc((s_size) * (sizeof(char)));
	if (!s1 || !s2 || !s_new)
		return (NULL);
	ft_strlcpy(s_new, s1, ft_strlen(s1) + 1);
	ft_strlcat(s_new, s2, s_size);
	return (s_new);
}
