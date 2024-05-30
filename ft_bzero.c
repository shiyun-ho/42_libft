/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:05:00 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/05/30 18:04:14 by shiyun           ###   ########.fr       */
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
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char*)s;
    // if (n == 0)
    //     return;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char arr[] = "Hello, World!"; // Test array with initial values

//     // Normal Case: Set elements 3 to 6 (inclusive) to zero using ft_bzero
//     printf("Testing ft_bzero (Normal Case):\n");
//     printf("Before: %s\n", arr);
//     ft_bzero(arr + 3, 4);
//     printf("After ft_bzero: %s\n", arr);

//     // Normal Case: Set elements 3 to 6 (inclusive) to zero using stdlib bzero
//     printf("\nTesting stdlib bzero (Normal Case):\n");
//     printf("Before: %s\n", arr);
//     bzero(arr + 3, 4);
//     printf("After stdlib bzero: %s\n", arr);

//     // Edge Case: Zero Size
//     printf("\nTesting ft_bzero (Zero Size):\n");
//     printf("Before: %s\n", arr);
//     ft_bzero(arr + 3, 0);
//     printf("After ft_bzero (Zero Size): %s\n", arr); // No change expected

//     printf("\nTesting bzero (Zero Size):\n");
//     printf("Before: %s\n", arr);
//     bzero(arr + 3, 0);
//     printf("After bzero (Zero Size): %s\n", arr); // No change expected
    
//     // Edge Case: Size Exceeding Array Bounds throw an error
//     printf("\nTesting bzero (Overflow):\n");
//     // This might cause undefined behavior depending on your implementation
//     // Be cautious and handle potential errors
//     bzero(arr, sizeof(arr) + 5); // Overflow

// // Edge Case: Size Exceeding Array Bounds throw an error
//     printf("\nTesting ft_bzero (Overflow):\n");
//     // This might cause undefined behavior depending on your implementation
//     // Be cautious and handle potential errors
//     ft_bzero(arr, sizeof(arr) + 5); // Overflow

//     return 0;
// }

