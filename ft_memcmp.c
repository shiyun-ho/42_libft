/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:11:22 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/30 20:48:08 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
* @desc: Compares first n bytes of mem areas s1 and s2
* @return: Integer less than, equal to, or greater than zero if 
*               first n bytes is < / == / > first n bytes of s2
*          - Nonzero return value, sign is determined by diff btw first n bytes(unsigned char)
*          - n == 0 -> return (0);
*/
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *s1_mem;
    unsigned char   *s2_mem;
    size_t          i;
    int             result;

    i = 0;
    result = 0;
    s1_mem = (unsigned char*)s1;
    s2_mem = (unsigned char*)s2;
    if (n == 0)
        return (0);
    while (i < n)
    {
        if(s1_mem[i] != s2_mem[i])
        {
            result = (unsigned char)s1_mem[i] - (unsigned char)s2_mem[i]; 
            return (result); 
        }
        i++;
    }
    return (result);
}