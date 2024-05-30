/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:46:09 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/30 19:54:55 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
* @ desc: Returns a pointer to the last occurrence of char c in string s
*           OR NULL if char is not found
*           '\0' is also considered part of the function
*/
char *ft_strrchr(const char *s, int c)
{
    int     i;
    int     len;
    char    *result_ptr;
    
    i = 0;
    len = ft_strlen(s);
    result_ptr = NULL;
    while(i <= len)
    {
        if (s[i] == c)
        {
            result_ptr = (char*)&s[i];
        }  
        i++;
    }
    if (i == len || result_ptr)
        return (result_ptr);    
    return NULL;
}
