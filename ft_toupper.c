/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:58:31 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/22 19:51:11 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* desc: Converts lowercase to uppercase
* if c == lowercase, return uppercase equivalent 
* if c is not unsigned char OR EOF, behavior == UNDEFINED
* @params: 
*/
int ft_isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 20);
	}
	return (c); 
}
