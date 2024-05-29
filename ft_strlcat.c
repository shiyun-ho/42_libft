/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:41:07 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/29 23:00:51 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
/*
* @desc: Concatenate strings
*       - Appends NULL terminated string src to the end of dst
*       - Append at most (size - strlen(dst) -1) bytes && NULL TERMINATE result 
*       - Take full size of buffer & guarantee NULL terminate result
*         (as long as size > 0 || as long as one byte free in dst)
*       - One byte should be reserved for NULL in size
*       - Both src and dst MUST BE NULL terminated 
* @return: total length of str created
*           - i.e. Initial len(dst) + len(src)
*           - if: strlcat() traverses char (size) without finding NULL
*             -> len(string) = size; dst str will not be null terminated since there's no space for NULL
*/
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  src_len;
    size_t  dst_len; 

    i = 0;
    src_len = ft_strlen(src); //find the length of src
    dst_len = ft_strlen(dst);
    if (src_len <= size - dst_len - 1 && src && dst) //-1 to account for '\0'
    {
        dst[dst_len++] = src[i++];    
    }
    dst[dst_len] = '\0';
    return (dst_len);
}
