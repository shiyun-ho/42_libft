/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:39:39 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/26 22:53:19 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
* @desc: Copies n bytes from src to dest
*        Memory areas may overlap
*        Copying takes place as though src bytes copied into temp array
*        Bytes are then copied from temp array to dest
* @return: pointer to dest
*/
void *memmove(void *dest, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *d;
    unsigned char   *s; 

    i = 0;
    d = (unsigned char*)dest; 
    s = (unsigned char*)src;
    //To ensure no overlapping regions ####
    //Copy using memcpy to copy from src to temp array
    //Copy from temp array to dest using memcpy
}