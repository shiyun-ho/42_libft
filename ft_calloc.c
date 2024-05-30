/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:48:22 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/30 21:00:05 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
* @desc: Allocates a memory for an array of nmemb elements of size bytes each
*           Memory is set to zero
* @return: Pointer to allocated memory
*               if (nmemb || size == 0) -> calloc() returns NULL
*                   OR unique pointer which can be passed to free();
*           On error -> return NULL
*/
void *calloc(size_t nmemb, size_t size);