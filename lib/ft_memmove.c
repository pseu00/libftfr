/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:38:08 by enucci            #+#    #+#             */
/*   Updated: 2025/11/27 18:38:14 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *temp;
	
	char *d = (char *)dest;
    
    char *s = (char *)src;
    
    *temp = *d;
    *d = *s;
    *s = *temp;
    
    while (n--) 
    {
        *d = *s;
        d++;
        s++;
    }
    return ((void*)dest);
}

int main()
{
	char dest[] = "ciao";
	char src[] = "hola";
	int n = 8;
	ft_memmove(dest, src, n);
    printf("Destinazione: %s\n", dest);
	
	
}
