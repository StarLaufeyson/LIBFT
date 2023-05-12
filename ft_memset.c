/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:39:12 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/05 19:18:09 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
/*#include	<libft.h>*/
#include	<stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*placeholder;

	placeholder = (unsigned char *)b;
	while (len > 0)
	{
		*placeholder = (unsigned char)c;
		placeholder++;
		len--;
	}
	return (b);
}

int	main (void)
{
	char str[] = "Welcome to Wonderland, Alice!";
	printf("Antes de memset: %s\n", str);

	//Asignamos el valor 'X' a los primeros 5 bytes de la cadena
	ft_memset(str, 'X', 5);

	printf("Después de memset: %s\n", str);
	return (0);
}