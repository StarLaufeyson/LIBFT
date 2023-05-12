/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:53:53 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/12 18:39:00 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = dest;
	s = src;
	if (d > s)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = {"Hola, qué tal!"};
	char	dest[] = {"Hello, how are you!"};

	//Copiar elemetnos del source al destiny utilizando ft_memmove
	ft_memmove(dest, src, sizeof(src));

	//Imprime source para verificar resultados
	printf("La cadena de origen es: %s\n", src);
	printf("La cadena de destino es: %s\n", dest);

	return (0);
}*/
