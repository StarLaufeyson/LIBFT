/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:13:23 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/12 17:13:25 by eluno-la         ###   ########.fr       */
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

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	dest_length;
	size_t	src_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (dest_length >= dest_size)
		return (dest_size + src_length);
	ft_strlcpy(dest + dest_length, src, dest_size - dest_length);
	return (dest_length + src_length);
}
