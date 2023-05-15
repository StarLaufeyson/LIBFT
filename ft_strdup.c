/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:32:33 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/15 18:15:06 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	length;
	char	*duplicate;
	length = ft_strlen(s);
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate != NULL)
	{
		size_t	i;

		i = 0;
		while (s[i] != '\0')
		{
			duplicate[i] = s[i];
			i++;
		}
		duplicate[i] = '\0';
	}
	return (duplicate);
}

int	main(void)
{
	const char	*original = "Wingardium Leviosa";
	char		*duplicate;

	duplicate = ft_strdup(original);
	if (duplicate != NULL)
	{
		printf("Cadena original: %s\n", original);
		printf("Cadena duplicada: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Error al duplicar la cadena.\n");
	}
	return (0);
}
