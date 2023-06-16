/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:47:06 by eluno-la          #+#    #+#             */
/*   Updated: 2023/06/16 17:44:31 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	sub_len = len;
	if (start >= s_len)
		return (ft_strdup(""));
	if (sub_len > (s_len - start))
		sub_len = s_len - start;
	substr = (char *)malloc((sub_len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, sub_len + 1);
	return (substr);
}

int	main(void)
{
	const char	*s = "Hello World";
	unsigned int	start = 7;
	size_t	len = 5;

	char	*substr = ft_substr(s, start, len);
	if (substr != NULL)
	{
		printf("Subcadena: %s\n", substr);
		free (substr); //Liberar memoria aasignada
	}
	else
	{
		printf("Error al extraer la subcadena.\n");
	}
	return (0);
}
