/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:20:33 by shiyun            #+#    #+#             */
/*   Updated: 2024/05/25 18:14:11 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	long long	num;
	int			sign; 
	int			i;

	sign = 1;
	i = 0; 
	num = 0;
	while (str[i] != '\0')
	{
		if(str[i] == ' ' || (str[i] >= '\n' && str[i] == '\r'))
			i++;
		else if (ft_isalpha(str[i]))
			return (num);
		else if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		else if(ft_isdigit(str[i]))
		{
			num *= 10; 
			num += str[i] - '0'; 
			i++;
		}
		else
			i++;
	}
	return (num * sign);
}

// #include <stdio.h>
// int main() {
//   // Valid cases
//   printf("ft_atoi(\"123\") = %i (expected 123)\n", ft_atoi("123"));
//   printf("ft_atoi(\"-456\") = %i (expected -456)\n", ft_atoi("-456"));
//   printf("ft_atoi(\"  +0\") = %i (expected 0)\n", ft_atoi("  +0"));
//   printf("ft_atoi(\"  -0\") = %i (expected 0)\n", ft_atoi("  -0"));

//   // Edge cases with leading whitespace
//   printf("ft_atoi(\" \t\n-123\") = %d (expected -123)\n", ft_atoi(" \t\n-123"));
//   printf("ft_atoi(\" \n123a\") = %d (expected 123)\n", ft_atoi(" \n123a"));

//   // Cases with non-numeric characters
//   printf("ft_atoi(\"abc123\") = %d (expected 0)\n", ft_atoi("abc123"));
//   printf("ft_atoi(\"-xyz\") = %d (expected 0)\n", ft_atoi("-xyz"));
//   printf("ft_atoi(\"+123a\") = %d (expected 123)\n", ft_atoi("+123a"));

//   // Cases with overflow
//   printf("ft_atoi(\"2147483648\") = %d (implementation dependent)\n", ft_atoi("2147483648"));  // May overflow on 32-bit systems
//   printf("ft_atoi(\"-2147483649\") = %d (implementation dependent)\n", ft_atoi("-2147483649"));  // May overflow on 32-bit systems

//   // Empty string
//   printf("ft_atoi(\"\") = %d (expected 0)\n", ft_atoi(""));

//   return 0;
// }