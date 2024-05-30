/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:48:22 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/30 23:53:37 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/*
* @desc: Allocates a block of memory for an array 
*           of n elements of size bytes each
*        Initialises every byte of block with '0' (value)
*        Void pointers are converted automatically to another pointer on assignment
* @return: (SUCCESS) -> returns void pointer to beginning of memory block
*          (No memory block of requested size available) -> return '\0'
*           IF (n || size == 0) -> calloc() returns NULL
*               OR unique pointer which can be passed to free();
*           On error -> return NULL
*/
void    *ft_calloc(size_t n, size_t size)
{
    void    *ptr;
    size_t  total_size;
    
    total_size = n * size;
    if (total_size / size != n)
        return (NULL);
    ptr = malloc(total_size);
    if (n == 0 || size == 0 || !ptr)
        return (NULL);
    ft_memset(ptr, 0, total_size);
    return (ptr);
}
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *arr1, *arr2;
//     size_t size = sizeof(int) * 5;

//     // Allocate using standard calloc
//     arr1 = (int*)calloc(5, sizeof(int));
//     if (!arr1) {
//         printf("calloc failed\n");
//         return (1);
//     }

//     // Allocate using your ft_calloc
//     arr2 = (int*)ft_calloc(5, sizeof(int));
//     if (!arr2) {
//         printf("ft_calloc failed\n");
//         free(arr1);  // Free memory from calloc before exiting
//         return (1);
//     }

//     // Check if both allocations contain zeros
//     for (int i = 0; i < 5; i++) {
//         if (arr1[i] != 0 || arr2[i] != 0) {
//             printf("Memory not initialized to zero!\n");
//             break;
//         }
//     }

//     printf("Both callocs allocated %zu bytes and initialized to zero.\n", size);

//     // Free the memory
//     free(arr1);
//     free(arr2);

//     return (0);
// }