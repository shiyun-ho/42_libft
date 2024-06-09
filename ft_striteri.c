/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:52:58 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 09:48:37 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @desc: Applies function f on each char of str 
*           Passing index index as arg1
*        Each char is passed by address to be modified by f if necessary
* @return: None
* @param: s - str to iterate on 
* @param: f - function to apply to each char
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s != NULL || f != NULL)
	{
		while (*s)
		{
			(*f)(i, s);
			i++;
			s++;
		}
	}
}
