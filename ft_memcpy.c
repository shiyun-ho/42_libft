/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:03:31 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/27 12:19:01 by shiyun           ###   ########.fr       */
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
    unsigned char   *dest_ptr;
    unsigned char   *src_ptr; 

    i = 0;
    dest_ptr = (unsigned char*)dest; 
    src_ptr = (unsigned char*)src;
    if (dest == NULL && src == NULL)
        return (NULL);
    while (i < n)
    {
        dest_ptr[i] = src_ptr[i];
        i++;
    }
    return (dest);
}