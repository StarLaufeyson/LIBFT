/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:44:36 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/25 17:25:59 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//Concatena 2 cadenas s1 y s2 y devuelve una cadena resultante
void	*ft_memcpy(void *dest, const void *src, size_t length);
size_t	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	total_len;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total_len = len1 + len2;
	result = (char *)malloc((total_len + 1) * sizeof(char));
	if (result == NULL) // o if (!result)
		return (NULL);
	ft_memcpy(result, s1, len1);
	ft_memcpy(result + len1, s2, len2 + 1);
	result[total_len] = '\0';
	return (result);
}

int	main(void)
{
	const char	*s1;
	const char	*s2;
	char		*result;

	s1 = "Hello, ";
	s2 = "Cleeveland!";
	result = ft_strjoin(s1, s2);
	if (result != NULL)
	{
		printf("Cadena resultante: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error al concatenar las cadenas.\n");
	}
	return (0);
}
