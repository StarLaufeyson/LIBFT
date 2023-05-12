/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:14:53 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/12 16:20:28 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_length;
	size_t	src_length;

	if (destsize <= ft_strlen(dest))
		return (destsize + ft_strlen(src));
	dest_length = ft_strlen(dest);
	src_length = 0;
	while (src[src_length] != '\0' && dest_length + 1 < destsize)
	{
		dest[dest_length] = src[src_length];
		dest_length++;
		src_length++;
	}
	dest[dest_length] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[src_length]));
}
