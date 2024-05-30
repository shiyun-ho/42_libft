/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:00:31 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/30 20:10:50 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*
* @ desc: Scans initial n bytes of memory area pointed to by s for first instance of c
* @ params: Both c and bytes of memory area pointed by s are unsigned char
* @ return: Pointer to matching byte
*               OR NULL if char does not occur in memory area
*/
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *s_mem;
    size_t          i;
    unsigned char   compared_c;
    
    s_mem = (unsigned char*)s;
    compared_c = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (s_mem[i] == compared_c)
            return (void *)&s_mem[i];
        i++;
    }
    return (NULL);
}