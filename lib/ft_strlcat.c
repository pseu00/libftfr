/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:45:31 by enucci            #+#    #+#             */
/*   Updated: 2025/10/29 18:45:34 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	i = 0;
	while (src[s])
		s++;
	if (size == 0)
		return (s);
	while (dest[d] && d < size)
		d++;
	if (d >= size)
		return (size + s);
	while (src[i] && (d + i + 1) < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}
/*int main()
{
	char dest[] = "ciao";
	char src[] = "salvee";
	int n = 10000;
	printf("%d\n", ft_strlcat(dest, src, n));
	printf("%s" , dest);
}*/
