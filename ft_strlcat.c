/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:08:24 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/13 15:08:54 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

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
	size_t	i;
	size_t	length;

	length = ft_strlen(dest) + ft_strlen(src);
	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (*dest)
		dest++;
	i = 0;
	while ((i < size - (length - ft_strlen(src)) - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

int	main(void)
{
	char	dest[29] = "Happy Birthday";
	const char	*src = " Mr president!";
	size_t	dest_size = sizeof(dest);
	size_t	result = ft_strlcat(dest, src, dest_size);

	printf("Concatena la cadena: %s\n", dest);
	printf("Longitud total: %zu\n", result);
	return (0);
}
