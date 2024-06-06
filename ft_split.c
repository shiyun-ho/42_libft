/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:09:29 by shiyun            #+#    #+#             */
/*   Updated: 2024/06/06 11:16:55 by shiyun           ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
    char    **arr;

    if (!s)
        return (NULL);
    if (!c)
        //Return arr of entire s
    
    //Use malloc to allocate memory
        //TODO: Calculate size of elements (+1 for end of arr) 
    arr = malloc(sizeof(char));
    if (!arr)
        return (NULL);
    //Iterate through s[]
    //if NEXT CHAR is delimiter > Add to array
    //Remember to add \0 to the end of array 
    //Free memory 
    return (arr);
}