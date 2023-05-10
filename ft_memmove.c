/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:53:53 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/10 17:31:05 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stddef.h>
/*#include	<libft.h>*/

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *d = dest;
	const char *s = src;

	if (d > s)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else 
	{
		size_t i = 0;
		while (i < len)
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

	//Copiar elemetnos del source al destiny utilizando ft_memmove
	ft_memmove(dest, src, sizeof(src));

	//Imprime source para verificar resultados
	printf("La cadena de origen es: %s\n", src);
	printf("La cadena de destino es: %s\n", dest);

	return (0);
}
