/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:11:21 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 09:32:45 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
* @param: s - string to output
* @param: fd - file descriptor
* description: Outputs string s to given file descriptor
*/
void	ft_putstr_fd(char *s, int fd)
{
	int		i;
	int		strlen;

	i = 0;
	strlen = (int) ft_strlen(s);
	while (i < strlen)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
