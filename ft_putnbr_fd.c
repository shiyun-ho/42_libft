/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:34:25 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/06 23:14:28 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
/*
* @desc: outputs integer 'n' to the given file descriptor
* @param: n: integer to output
* @param: fd: file descriptor to write on 
*/
void	ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        // write(fd, "-2147483648", 11);
        ft_putstr_fd("-2147483648", fd);
    if (n == 2147483647)
        // write(fd, "2147483647", 11);
        ft_putstr_fd("2147483647", fd);
    if (n < 0 && n != -2147483648)
    {
        ft_putchar_fd('-', fd);
        n = n * -1;
    }
    if (n >= 10)
    {
        ft_putnbr_fd((n / 10), fd);
        ft_putchar_fd((n % 10) + '0', fd);
    }
    else
        ft_putchar_fd(((n)+ '0'), fd);
}

// int main()
// {
//     // for (int i = -5; i <= 5; i++)
//     // {
//     //     ft_putnbr_fd(i, 1);
//     //     ft_putchar_fd('\n', 1);        
//     // }

//     // for (int j = 123; j <= 128; j++)
//     // {
//     //     ft_putnbr_fd(j, 1);
//     //     ft_putchar_fd('\n', 1);        
//     // }

//     // for (int k = -123; k <= -118; k++)
//     // {
//     //     ft_putnbr_fd(k, 1);
//     //     ft_putchar_fd('\n', 1);        
//     // }
    
//     ft_putnbr_fd(-2147483648, 1);
//     ft_putchar_fd('\n', 1);   
// }