/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:57:28 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/12 14:46:37 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>
/*#include	<libft.h>*/

void	*ft_mempcy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}

	return dest;
}

int	main(void)
{
	char	src[] = "Hola mundo!";
	char	dest[15];
	//añadimos 15 para asegurarnos que haya suficiente espacio para copiar la cadena de  origen//
	memcpy(dest, src, sizeof(src));

	printf("La cadena de origen es: %s\n", src);
	printf("La cadena de destino es: %s\n", dest);

	return (0);	
}
