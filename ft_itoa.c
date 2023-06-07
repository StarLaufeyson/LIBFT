/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:46:02 by eluno-la          #+#    #+#             */
/*   Updated: 2023/06/02 19:23:20 by eluno-la         ###   ########.fr       */
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

static char	*convert_int(int n, int negative, int num_digits)
{
	char	*str;
	char	*ptr;

	str = (char *)malloc((num_digits + negative + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ptr = str + num_digits + negative;
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

char	*ft_itoa(int n)
{
	int	negative;
	int	num_digits;

	negative = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		negative = 1;
		n = -n;
	}
	num_digits = digit_count(n);
	return (convert_int(n, negative, num_digits));
}

/*int	main(void)
{
	int		number;
	char	*result;

	number = -12345;
	result = ft_itoa(number);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
