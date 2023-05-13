/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:15:14 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/13 15:25:45 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//mayúsculas a minúculas
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	main(void)
{
	char	c;

	c = 'A';
	int lower = ft_tolower(c);

	printf("Original: %c\n", c);
	printf("Minúscula: %c\n", lower);

	return (0);
}
