/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:41:05 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/20 18:55:53 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	unsigned char	*d;
	unsigned const char	*s;
	size_t	i;

	d = dest;
	s = src;
	i = 0;
	while (i < length)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (s >= d || (s + length) <= d)
		return (ft_memcpy(dest, src, length));
	while (length--) // length >= 0
		d[length] = s[length];
	return (dest);
}

int	main(void)
{
	char	src[] = {"Hola, qué tal!"};
	char	dest[] = {"Hello. how are you!"};

	//Copiar eementos del origne (src) al destino (dest) utilizando ft_memmove
	ft_memmove(dest, src, sizeof(src));
	//Imprime origen para verificar resultados
	printf("La cadena de origen es: %s\n", src);
	printf("La cadena de destino es: %s\n", dest);

	return (0);
}
