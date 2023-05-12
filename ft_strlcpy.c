/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:42:32 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/12 13:41:45 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>
#include	<stdio.h>
/*#include	<libft.h>*/

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;

	i = 0;
	while (*src && (i + 1 < dest_size))
	{
		*dest++ = *src++;
		i++;
	}
	if (dest_size > 0)
	{
		*dest = '\0';
	}
	while (*src++)
	i++;
	return (i);
}

int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];

	size_t length = ft_strlcpy(dest, src, sizeof(dest));

	printf("Cadena de origen: %s\n", src);
	printf("Cadena de destino: %s\n", dest);
	printf("Longitud de la cadena copiada: %zu\n", length);
	return (0);
}
