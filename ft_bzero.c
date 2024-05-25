/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:05:00 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/05/25 18:05:00 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
* @desc: Erases data in the n bytes of memory from location
*        pointed by s -> Writes zeros (bytes containing '\0') to 
*        that area
*/
void ft_bzero(void *s, size_t n)
{
    size_t          i;
    unsigned char   *str;

    i = 0;
    str = (unsigned char*)s;
    while (str[i] != '\0' && i < n)
    {
        str[i] = 0;
        i++;
    }
}