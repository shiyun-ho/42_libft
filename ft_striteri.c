/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:52:58 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/08 12:04:12 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h":26

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
    unsigned int    i;
    unsigned int    str_len;

    if (!s)
        return (NULL);
    str_len = ft_strlen(s);
    i = 0;
    while (i < str_len)
    {
        s + i = (*f)(i, s + i);
        i++;
    }
}