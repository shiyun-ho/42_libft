/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:58:38 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/24 00:25:49 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* @ desc: Locates first occurrence of null-terminated str little in str big
* 		  where not more than len characters are searched
*		  Characters that appear after '\0' are not searched
* @ param: str, str, size_t
* @ return: little ("") -> return big
*			little (nowhere in BIG) -> return NULL
*			OTHERWISE -> pointer to first char of first occurrence of little
*/

//TODO: Fix the following code. 
char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i; 

	i = 0;
	while(big[i] != '\0' && i < len && big[i] != little[i])
	{
		i++;
	}
	return big[i]; 
}
