/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:09:29 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 21:49:45 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculate_word_count(char const *s, char c)
{
	int		i;
	int		word_count;

	word_count = 0;
	if (s == NULL)
		word_count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			word_count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (word_count);
}

static void	free_array(int i, char **arr)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}

static char	**add_to_array(char const *s, char c, char **arr)
{
	int	i;
	int	word_len;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c) == NULL)
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			arr[i] = ft_substr(s, 0, word_len);
			if (!arr[i])
				free_array(i, arr);
			i++;
			s += word_len;
		}
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**arr;

	word_count = calculate_word_count(s, c);
	arr = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!s || !arr)
		return (NULL);
	arr = add_to_array(s, c, arr);
	return (arr);
}
