/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:25:34 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/19 18:20:23 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>
#include	<stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	//size = tamaño máx del bufer de destino, incluyendo un espacio para '\0'
	size_t	i;
	size_t	src_length;

	i = 0;
	src_length = 0; //variable para almacenar la longitud de la cadena
	//Calcular la longitud de la cadena de origen
	while (src[src_length] != '\0') //verifica si el caracter actual no es el nulo (o final de la cadena)
		src_length++;
	//copiar caracteres de src a dest hasta alcanzar tamaño máximo o final
	while (src[i] != '\0' && i < size - 1) //garantiza que no excedamos el tamaño máximo de dest
	{
		dest[i] = src[i];
		i++;
	}
	//Asegurate de que dest este terminado correctamente con nulo '\0'
	if (size > 0)
		dest[i] = '\0'; 
	//Devolver la longitud de la cadena de origen
	return (src_length);
}

int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];

	size_t	length = ft_strlcpy(dest, src, sizeof(length));

	printf("Cadena de origen: %s\n", src);
	printf("Cadena de destino: %s\n", dest);
	printf("Longitud de la cadena copiada: %zu\n", length);
	return (0);
}
