/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:39:39 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 10:16:49 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
* @desc: Copies n bytes from src to dest
*        Memory areas may overlap
*        Copying takes place as though src bytes copied into temp array
*        Bytes are then copied from temp array to dest
* @return: pointer to dest
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	i = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest_ptr > src_ptr)
	{
		dest_ptr = dest_ptr + n - 1;
		src_ptr = src_ptr + n - 1;
		while (n-- > 0)
			*dest_ptr-- = *src_ptr--;
	}
	else
	{
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dest);
}
