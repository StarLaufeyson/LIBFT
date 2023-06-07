/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:48:49 by eluno-la          #+#    #+#             */
/*   Updated: 2023/06/01 18:59:56 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
}

int	main(void)
{
	char	*str;
	int		fd;

	str = "Hello, muggles!";
	fd = 1;
	ft_putstr_fd(str, fd);
	return (0);
}
