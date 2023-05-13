/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:49:35 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/13 19:03:58 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//compara dos bloques de memoria y det si son iguales, mayores o menores
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char *p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}

	return (0);
}

int	main(void)
{
	char	str1[] = "Lucifer";
	char	str2[] = "Lucifer";
	size_t n = strlen(str1);

	int	result = ft_memcmp(str1, str2, n);

	if (result == 0)
		printf("Los bloques de memoria son iguales.\n");
	else if (result < 0)
		printf("El primer bloque de memoria es menor.\n");
	else
		printf("El primer bloque de memoria es mayor.\n");

	return (0);
}
