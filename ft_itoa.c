/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:46:02 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/27 17:56:46 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	length(int num)
{
	int	length;

	length = 1;
	while (num >= 0)
	{
		length++;
		num /= 10;
	}
	return (length);
}

/*static	int	sign_negative(int n, char *str)
{
	if (n < 0)
	{
		*str = '-';
		str++;
		return (1);
	}
	return (0);
}*/

char	*ft_itoa(int n)
{
	int		negative;
	int		digitcount;
	int		str_length;
	char	*str;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		negative = 1;
		n = -n;
	}
	digitcount = ft_itoa(n);
	str_length = digitcount + negative + 1;
	str = (char *)malloc(str_length * sizeof(char));
	if (str == NULL)
		return (NULL);
	ptr = str + str_length - 1;
	*ptr = '\0';
	while (ptr > str + negative)
	{
		*--ptr = '0' + (n % 10);
		n /= 10;
	}
	if (negative)
		*str = '-';
	return (str);
}

int	main(void)
{
	int		number;
	char	*result;

	number = -12345;
	result = ft_itoa(number);
	printf("%s\n", result);
	free(result);
	return (0);
}
