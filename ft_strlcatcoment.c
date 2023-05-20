/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:09:08 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/20 19:01:57 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdeff.h>

//concatena dos cadenas de forma segura, evitando desbordamientos de buffer
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_length; //longitud de la cadena de destino
	size_t	src_length; //Longitud de la cadena origen
	size_t	total_length; //Longitud después de concatenar

	dest_length = ft_strlen(dest); //obtener la longitud de la cadena de destino
	src_length = ft_strlen(src); //obtener longitud cadena origen
	total_length = dest_length + src_length; //Calcular la longitud total después de concatenar
	if (size <= dest_length)
		return (src_length + size); //Si el tamaño es menor o igual a la longitud de la cadena de destino, retornar la suma de la longitud de la cadena de origen y el tamaño  
	size_t	i; //índice ppara iterar sobre la cadena de origen

	i = 0;
	while (src[i] != '\0' && dest_length + 1 < size - 1)
	{
		dest[dest_length + 1] = src[i]; //Copiar el carácter de la cadena origen a la cadena de destino
		i++;
		dest_length++; //incrementar longitud cadena de destino
	}
	dest[dest_length + 1] = '\0'; //Agregar el caracter nulo de terminación
	return (total_length); //Retornar la longitud total después de concatenar
}

int	main(void)
{
	char	src[] = {"Hola, qué tal!"};
	char	dest[] = {"Hello, how are you!"};

	//Copiar elementos del origen al destino utilizando ft_memmove
	ft_memmove(dest, src, sizeof(src));

	//Imprimir origen para verificar resultados
	printf("La cadena de origen: %s\n", src);
	printf("La cadena de destino: %s\n", dest);

	return (0);
}
