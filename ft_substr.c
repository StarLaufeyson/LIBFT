/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:47:06 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/24 18:41:26 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>
#include    <stdio.h>
#include    <stdlib.h>

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


size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*substr;

	s_len = ft_strlen(s);
	sub_len = len;
	//Verificar si el índice de inicio esta fuera de los límites
	if (start >= s_len)
		return (NULL);
	//calcular longitud de la subcadena
	if (sub_len > (s_len - start))
	//Garantizamos que la subcadena no exceda los límites de la cadena original
		sub_len = s_len - start;
	//Asignar memoria a la subcadena
	substr = (char *)malloc((sub_len + 1) * sizeof(char));
	//sub_len + 1 reserva espacio para la subcadena, + 1 (para añadir el '\0')
	if (substr == NULL)
		return (NULL);
	//Copiar los caracteres de la cadena a la subcadena
	ft_strlcpy(substr, s + start, sub_len);
		substr[sub_len] = '\0';
		return (substr);
}

int	main(void)
{
	const char	*s = "Hello World";
	unsigned int	start = 7;
	size_t	len = 5;

	char	*substr = ft_substr(s, start, len);
	if (substr != NULL)
	{
		printf("Subcadena: %s\n", substr);
		free (substr); //Liberar memoria aasignada
	}
	else
	{
		printf("Error al extraer la subcadena.\n");
	}
	return (0);
}
