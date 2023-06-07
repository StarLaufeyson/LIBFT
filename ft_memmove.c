/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:21:00 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/20 18:55:03 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
//nueve src a dest, evitando superposiciones de memoria. más seguro que memcpy
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	const char	*s;
	size_t	i;

	d = dest;
	s = src;
	if (d > s)
	{
		while (length-- > 0)
		{
			d[length] = s[length];
		}
	}
	else
	{
		i = 0;
		while (i < length)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

int	main(void)
{
	char	src[] = {"Hola, qué tal!"};
	char	dest[] = {"Hello, how are you!"};

	//copiar elementos del src u origen al destiny utilizando ft_memmove
	ft_memmove(dest, src, sizeof(src));
	//Imprime src para verificar resultados
	printf("La cadena de origen es: %s\n", src);
	printf("La cadena de destino es: %s\n", dest);

	return (0);
}
