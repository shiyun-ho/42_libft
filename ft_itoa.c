/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:36:55 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 19:25:27 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculate_strlen(int n)
{
	int		str_len;
	int		value;

	str_len = 0;
	value = n;
	if (value <= 0)
	{
		str_len++;
	}
	while (value != 0)
	{
		value = value / 10;
		str_len++;
	}
	return (str_len);
}

static long	calculate_value(long n)
{
	long int	value;

	value = (long int)n;
	if (n < 0)
		value = n * -1;
	return (value);
}

static char	*create_string(size_t length)
{
	char	*str;

	str = malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			str_len;
	long int	value;
	int			i;

	str_len = calculate_strlen(n);
	value = calculate_value(n);
	str = create_string(str_len);
	if (str)
	{
		i = str_len - 1;
		while (i >= 0)
		{
			str[i] = (value % 10) + '0';
			value = value / 10;
			i--;
			if (n < 0)
				str[0] = '-';
		}
		str[str_len] = '\0';
		return (str);
	}
	return (NULL);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {

//     printf("Testing normal values:\n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("ft_itoa(%i) = (str)>>> %s\n", i, ft_itoa(i));
//     }
//     printf("Testing negative values:\n");
//     for (int i = -1; i >-10; i--)
//     {
//         printf("ft_itoa(%i) = (str)>>> %s\n", i, ft_itoa(i));
//     }
//     printf("Testing other values:\n");
//     for (int i = 2140; i < 2150; i++)
//     {
//         printf("ft_itoa(%i) = (str)>>> %s\n", i, ft_itoa(i));
//     }
//     printf("Testing other negative values:\n");
//     for (int i = -1000; i >-1005; i--)
//     {
//         printf("ft_itoa(%i) = (str)>>> %s\n", i, ft_itoa(i));
//     }
//     printf("Testing big values:\n");
//     // for (int i = 2147483645; i <= 2147483647; i++)
//     // {
//     //     printf("ft_itoa(%i) = (in str) %s\n", i, ft_itoa(i));
//     // }
// }
