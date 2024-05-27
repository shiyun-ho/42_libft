/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:25:48 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/27 14:52:14 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
* @param: s - string to output
* @param: fd - file descriptor
* description: Outputs string s to given file descriptor followed by new line
*/
void	ft_putendl_fd(char *s, int fd)
{
    // size_t i;
    // size_t strlen;
    
    // i = 0;
    // strlen = ft_strlen(s);
    if (s || fd > 0)
    {
        ft_putstr_fd(s,fd);
        write(1, "\n", 1);
    }
}