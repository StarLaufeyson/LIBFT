/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:16:31 by eluno-la          #+#    #+#             */
/*   Updated: 2023/04/29 16:21:53 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
/*#include	<lifbt.h>*/
#include	<stdio.h>
#include	<ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_isdigit('3'));
	printf("%d\n", ft_isdigit('b'));
	return (0);
}
