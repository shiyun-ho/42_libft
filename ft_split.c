/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:09:29 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/09 09:11:55 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @desc: Allocates with malloc

	*           Returns an array of strings obtained by splitting 's' using the char 'c' as delimiter
 *           Array must end with '\0'
 * @param: s (str to be split), c" delimited char
 * @return: arr of new strings resulting from split
 *           Allocation fails -> NULL
 */
static int   calculate_word_count(char const *s, char c)
{
    int      i;
    int      word_count;

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
static void     free_array(int i, char **arr)
{
    while (i > 0)
    {
        i--;
        free(arr[i]);
    }
    free(arr);
}
static char     **add_to_array(char const *s, char c, char **arr)
{
    int      i;
    int      word_len;
    
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
    int  word_count;
    char    **arr;

    word_count = calculate_word_count(s, c);
    arr = (char **)malloc((word_count + 1) * sizeof(char*));
    if (!s || !arr)
        return (NULL);
    arr = add_to_array(s, c, arr);
    return (arr);
}
// #include <stdio.h>

// int main() {
//     char s[] = "      split       this for   me  !       ";
//     char c = ' ';
//     char **arr_substr = ft_split(s, c);

//     if (arr_substr == NULL) {
//         printf("Error: Unable to allocate memory for split words.\n");
//         return 1; // Indicate an error
//     }

//     int i = 0;
//     while (arr_substr[i]) {
//         printf("%s\n", arr_substr[i]);
//         i++;
//     }

//     // // Free the allocated memory for the array and individual strings
//     // free_array(i, arr_substr); // Assuming `free_array` is implemented correctly

//     return 0; // Indicate successful execution
// }

