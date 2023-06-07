/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:39:12 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/17 19:49:59 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//se utiliza para establecer un bloque de memoria con un valor específico
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}

/*int	main (void)
{
	char str[] = "Welcome to Wonderland, Alice!";
	printf("Antes de memset: %s\n", str);

	//Asignamos el valor 'X' a los primeros 5 bytes de la cadena
	ft_memset(str, 'X', 5);

	printf("Después de memset: %s\n", str);
	return (0);
}*/
