/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:05:39 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/13 19:21:00 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//busca la primera aparición de una subcadena
int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);

char	*ft_strnstr(const char *big, const char *little, size_t length)
{
	size_t	little_length;

	little_length = ft_strlen(little);
	if (little_length == 0)
		return ((char *)big);
	while (*big && length >= little_length)
	{
		if (ft_strncmp(big, little, little_length) == 0)
			return ((char *)big);
		big++;
		length--;
	}

	return (NULL);
}

int	main(void)
{
	const char	*big = "Disney World!";
	const char	*little = "World";
	size_t	length = 14;

	char	*result = ft_strnstr(big, little, length);

	if (result != NULL)
		printf("Subcadena encontrada: %s\n", result);
	else
		printf("Subcadena no encontrada\n");

	return (0);
}
