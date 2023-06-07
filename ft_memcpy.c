/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:28:35 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/24 19:00:16 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
//copia 'n' bytes de origen/src a destino/dest
void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	char	*d;
	const char	*s;
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

int	main(void)
{
	char	src[] = "Welcome to Hogwarts!";
	char	dest[22];
	ft_memcpy(dest, src, sizeof(src));

	printf("La cadena de origen: %s\n", src);
	printf("La cadena de destino: %s\n", dest);

	return (0);
}

