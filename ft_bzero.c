/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:24:59 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/17 19:48:55 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_bzero(void *s, size_t n) //no va a ser un caracter como en memset que pusimos 'X' sino que siempre será '0'
{
	size_t	i;
	unsigned char	*str;

	if (n == 0)
		return ;
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
		str[i++] = 0;
	return ;
}

/*int	main(void)
{
	char	str[] = "Good morning, Vietnam!";
	size_t	n = sizeof(str);

	printf("Before ft_bzero: %s\n", str);
	ft_bzero(str, n);
	printf("After ft_bzero: %s\n", str);
	return (0);
}*/
