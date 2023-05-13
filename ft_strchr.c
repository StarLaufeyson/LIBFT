/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:32:55 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/13 15:48:02 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//primera aparición de un carácter en una cadena
char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

int	main(void)
{
	const char *str = "Welcome to Disney World!";
	char	search_char = 'D';
	char	*result = ft_strchr(str, search_char);

	if (result != NULL)
	{
		printf("El carácter '%c' se encomntró en la cadena: %s\n", search_char, result);
	}
	else
	{
		printf("El carácter '%c' no se encontró en la cadena. \n", search_char);
	}

	return (0);
}
