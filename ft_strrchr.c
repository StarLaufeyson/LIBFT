/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:00:36 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/13 18:00:44 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//Busca la última ocurrencia del carácter 'c' en la cadena 's'
size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;

	//obtiene la longitud de la cadena
	length = ft_strlen(s);
	//recorre la cadena de forma inversa desde el último carácter
	while (length > 0 && s[length] != (char)c)
	{
		length--;
	}
	//verifica si encontró el carácter buscado
	if (s[length] == (char)c)
	{
		//devuelve un puntero al carácter encontrado
		return ((char *)& s[length]);
	}
	//si no se encontró devuelve NULL
	return (NULL);
}

int	main(void)
{
	const char	*str = "Welcome to Disney World!";
	int	c;

	c = 'i';
	char	*result = ft_strrchr(str, c);

	if (result != NULL)
	{
		printf("Última ocurrencia de '%c' encontrada en la posición %ld: %s\n", c, result - str, result);
	}
	else
	{
		printf("'%c' no se encontró en la cadena. \n", c);
	}

	return (0);
}
