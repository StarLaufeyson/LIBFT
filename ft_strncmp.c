/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:39:17 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/13 18:04:13 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//Compara los primeros 'n' caracteres de dos cadenas de caracteres 's1' y 's2'
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && n--)
	{
		if (s1[x] != s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
			x++;
	}
	return (0);
}

int	main(void)
{
	const char	*s1 = "Lucifer";
	const char	*s2 = "Luci";
	size_t	n = 4;

	int	result = ft_strncmp(s1, s2, n);

	if (result == 0)
		printf("Las cadenas son iguales hasta el carácter %zu\n", n);
	else if (result < 0)
		printf("La cadena s1 es menor que s2\n");
	else
		printf("La cadena s1 es mayor que s2\n");

	return (0);	
}
