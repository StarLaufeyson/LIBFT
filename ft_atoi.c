/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:29:02 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/15 17:53:43 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
//Convierte cadena de caracteres que representa en número entero en un valor entero
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

/*int	main(void)
{
	const char	*str = " -97865abc";
	int	num = ft_atoi(str);

	printf("Numero convertido: %d\n", num);
	return (0);
}*/
