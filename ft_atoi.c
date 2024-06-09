/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:20:33 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 18:22:54 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_atoi(const char *nptr)
// {
// 	int result;
// 	int sign;
// 	int i;

// 	result = 0;
// 	sign = 1;
// 	i = 0;
// 	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == 32)
// 		i++;
// 	if (nptr[i] == '-' || nptr[i] == '+')
// 	{
// 		if (nptr[i] == '-')
// 			sign *= -1;
// 		i++;
// 	}
// 	while (nptr[i] >= '0' && nptr[i] <= '9')
// 	{
// 		result = (result * 10) + (nptr[i] - '0');
// 		i++;
// 	}
// 	if (result <= 2147483647)
// 		return (sign * result);
// 	return (0);
// }

int	ft_atoi(const char *str)
{
	int			num;
	int			sign;
	int			i;

	sign = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if (num <= 2147483647)
		return (num * sign);
	return (0);
}
