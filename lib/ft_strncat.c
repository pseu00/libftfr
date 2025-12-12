/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:21:33 by enucci            #+#    #+#             */
/*   Updated: 2025/10/27 22:21:37 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	z;

	i = 0;
	z = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[z] = (src[i]);
		i++;
		z++;
	}
	dest[z] = '\0';
	return (dest);
}
/*int main ()
{
	char dest[] = "ciao";
	char src[] = "caio";
	unsigned int nb = 7;
	printf("%s",ft_strncat(dest, src, nb));
}*/
