/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:56:43 by enucci            #+#    #+#             */
/*   Updated: 2025/12/08 13:16:10 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total;
    unsigned char* ptr;
    size_t i;
    
    total = nmemb * size;
    ptr =(unsigned char *) malloc(total);

    if (nmemb == 0 || size == 0)
    return (NULL);
    
    i = 0;
    while (ptr[i] != '\0')
    {
        while (i < total)
        ptr = '\0';
        i++;
    }
    return ((char*)ptr);
}
int main()
{
    size_t n = 7;
    int *arr;
    
    arr = (int*)ft_calloc(n, sizeof(int));
    for(size_t i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
