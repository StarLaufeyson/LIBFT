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

static int	digit_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

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
	digitcount = digit_count(n);
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
