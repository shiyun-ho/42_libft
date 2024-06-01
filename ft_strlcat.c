/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:41:07 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/01 17:53:52 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * @desc: Concatenate strings
 *       - Appends NULL terminated string src to the end of dst
 *       - Append at most (size - strlen(dst) -1) bytes && NULL TERMINATE result
 *       - Take full size of buffer & guarantee NULL terminate result
 *         (as long as size > 0 || as long as one byte free in dst)
 *       - One byte should be reserved for NULL in size
 *       - Both src and dst MUST BE NULL terminated
 * @return: total length of str created
 *           - i.e. Initial len(dst) + len(src)
 *           - if: strlcat() traverses char (size) without finding NULL
 *            
	-> len(string) = size; dst str will not be null terminated since there's no space for NULL
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	remaining_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	if (size >= dst_len + 1)
	{
		i = 0;
		remaining_len = size - dst_len - 1;
		while (i < remaining_len && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char dst[50];
//     char dst2[50];
//     const char *src = "Hello, world!";

//     //Normal: Enough space in dst for whole of src
//     memset(dst, 0, sizeof(dst));
//     memset(dst2, 0, sizeof(dst2));
//     size_t ret = ft_strlcat(dst, src, sizeof(dst));
//     size_t ret_std = strlcat(dst2, src, sizeof(dst2));
//     printf("dst:\n |%s|\n", dst);
//     printf("dst2:\n |%s|\n", dst2);
//     printf("return (value: %zu (expected: %zu)\n\n", ret, ret_std));

//     //Edge: When dst size < src length
//     memset(dst, 0, sizeof(dst));
//     memset(dst2, 0, sizeof(dst2));
//     ret = ft_strlcat(dst, src, 10);
//     ret_std = strlcat(dst2, src, 10);
//     printf("dst:\n |%s|\n", dst);
//     printf("dst2:\n |%s|\n", dst2);
//     printf("return (value: %zu (expected: %zu)\n\n", ret, ret_std));

//     //Edge case: src and dst overlap
//     memset(dst, 'a', sizeof(dst));
//     dst[10] = '\0';
//     memset(dst2, 'a', sizeof(dst2));
//     dst2[10] = '\0';
//     ret = ft_strlcat(dst + 5, src, sizeof(dst) - 5);
//     ret_std = strlcat(dst2 + 5, src, sizeof(dst) - 5);
//     printf("dst:\n |%s|\n", dst);
//     printf("dst2:\n |%s|\n", dst2);
//     printf("return (value: %zu (expected: %zu)\n\n", ret, ret_std));

// }
