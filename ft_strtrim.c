/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:52:01 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/26 17:54:41 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	s1_len;
	size_t	trim_len;

	s1_len = strlen(s1);
	start = 0;
	end = s1_len - 1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (start < s1_len && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	if (end >= start)
	{
		trim_len = end - start +1;
	}
	else
	{
		trim_len = 0;
	}
	trim = (char *)malloc((trim_len + 1) * sizeof(char));
	if (trim == NULL)
		return (NULL);
	ft_memcpy(trim, s1 + start, trim_len);
	trim[trim_len] = '\0';
		return (trim);
}

/*int	main(void)
[
	char	*s1 = " Welcome to Hogwarts! ";
	char	*set = " ";

	char	*trim = ft_strtrim(s1, set);

	if (trim != NULL)
	{
		printf("Original: \"%s\"\n", s1);
		printf("Trimmed: \"%s\"\n", trim);
		free(trim);
	}
	return (0);
]*/