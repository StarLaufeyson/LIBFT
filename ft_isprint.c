/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:25:20 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/10 18:21:53 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<ctype.h>
#include	<stdio.h>
#include	<unistd.h>
/*#include	<libft.h>*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('~'));
	printf("%d\n", ft_isprint('$'));
	return (0);
}
