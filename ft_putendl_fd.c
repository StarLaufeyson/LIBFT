/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:29:30 by eluno-la          #+#    #+#             */
/*   Updated: 2023/06/01 19:35:04 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd >= 0)
	{
		while (*s)
			write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

int	main(void)
{
	char	*str;
	int		fd;

	str = "Welcome to hogwarts!";
	fd = 1;
	ft_putendl_fd(str, fd);
	return (0);
}
