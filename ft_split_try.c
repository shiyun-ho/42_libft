/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_try.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:09:29 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/08 21:10:04 by hshi-yun         ###   ########.fr       */
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
    int     word_count;

    word_count = 1;
    while (s)
    {
        if (s == c)
        {
            word_count++;
        }
        s++;
    }
    return (word_count);
}
int     find_start(char *current_ptr, char *start_ptr)
{
    int start;
    
    if (current_ptr == start_ptr) 
        start = 0;
    else 
    {
        start = (int) current_ptr - (int) start_ptr;
        start_ptr = current_ptr;
    }
    return (start);
}
static void     free_array(int k, char **arr)
{
    while (k > 0)
    {
        k--;
        free(arr[k]);
    }
    free(arr);
}

static char     **add_to_array(char const *s, char c, char **arr, size_t word_count)
{
    int     length;
    int     k;
    int     start;
    char    *start_ptr;

    start_ptr = s;
    while (*s && k < word_count)
    {
        if (s != c)
            length++; //calculate word length
        else if (s == c)
        {
            arr[k] = ft_substr(s, find_start(s, start_ptr), length); //need to find start
            if (!arr[k]) //if cannot allocate memory >> free every element before this 
            {
                free_array(k, arr);
                return (NULL);
            }
            k++;
            length = 0;
        }
        s++;
    }
    arr[k] = NULL;
    return (arr);
}
//free arr[k]
//free the whole arr 

char	**ft_split(char const *s, char c)
{
    char    **arr;
    size_t  word_count;
    
    if (!s || !c)
        return (NULL);
    word_count = calculate_word_count(s, c);
    arr = (char **)malloc((word_count + 1) * sizeof(char**));
    if (!arr)
        return (NULL);
    arr = add_to_array(s, c, arr, word_count);
    return (arr);
}


// #include <stdio.h>
// int main()
// {
//     char s[] = "Hello world, how are you?";
//     char c = ' ';
//     char **arr_substr = ft_split(s, c);

//     int i = 0;
//     while (arr_substr[i])
//     {
//         printf("%s\n", arr_substr[i]);
//         i++;
//     }
// }