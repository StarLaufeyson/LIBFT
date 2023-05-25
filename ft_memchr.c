/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:08:25 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/13 18:35:55 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//busca la primera aparición de un byte específico en un bloque de memoria
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	x;

	ptr = (unsigned char *)s;
	x = (unsigned char)c;

	while (n > 0)
	{
		if (*ptr == x)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "Lucifer Morningstar!";
	char	x = 'M';
	size_t	n = strlen(str);

	void	*result = ft_memchr(str, x, n);

	if (result != NULL)
		printf("El byte '%c' se encontró en la posición %ld\n", x, (char *)result - str);
	else
		printf("El byte '%c' no se encontró en la memoria\n", x);

	return (0);
}
