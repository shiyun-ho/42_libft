/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:03:31 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/25 21:04:16 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*
* @desc: Copies n bytes from src to des
*        Memory areas must not overlap. 
* @return: pointer to dest
*/
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *d;
    unsigned char   *s; 

    i = 0;
    d = (unsigned char*)dest; 
    s = (unsigned char*)src;
    if (dest == NULL && src == NULL)
        return (0);
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}