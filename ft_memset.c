/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:12:42 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/05/28 21:23:46 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
/*
* @desc: //Set bytes in memory// 
* 		 Shall copy c (converted to an unsigned char)
*		 into each of the first n bytes of the object pointed to by s. 
* @return: return s;
*		   error -> no return value
*/		 
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char*)s;
	while(i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[50] = "GeeksForGeeks is for programming geeks."; 
// 	char str2[50] = "GeeksForGeeks is for programming geeks."; 

//     printf("\nBefore memset(): %s\n", str); 
  
//     // Fill 8 characters starting from str[13] with '.' 
//     memset(str + 13, '.', 8*sizeof(char)); 
//   	ft_memset(str2 + 13, '.', 8*sizeof(char)); 
  
//     printf("After memset():  %s\n", str); 
//  	printf("After ft_memset():  %s\n", str2); 
//     return 0; 
// }