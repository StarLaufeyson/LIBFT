/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:27:34 by eluno-la          #+#    #+#             */
/*   Updated: 2023/06/15 19:06:02 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_words(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

/*void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	if (split)
	{
		while (split[i] != NULL)
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
}*/

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		start;

	result = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	start = 0;
	while (*s)
	{
		handle_entry(&result, s, c, &i);
		s++;
	}
	result[i] = NULL;
	if (!result[i])
		ft_free_split(result);
	return (result);
}

/*char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		start;

	result = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	start = 0;
	while (*s)
	{
		handle_entry(&result, s, c, &i);
		s++;
	}
	result[i] = NULL;
	ft_free_split(result);
	return (result);
}*/

void	handle_entry(char ***result, char const *s, char c, int *i)
{
	int	start;
	int	size;

	size = ft_size_words(s - 1, c, start);
	start = 0;
	if (*s == c)
	{
		if (s > s - 1 && *s - 1 != c)
		{
			(*result)[*i] = (char *)malloc((size + 1) * sizeof(char));
			if ((*result)[*i])
			{
				ft_strlcpy((*result)[*i], s - size, size);
				(*result)[*i][size] = '\0';
				(*i)++;
			}
		}
		start = 0;
	}
	else if (start++ == 0)
		start = *i - 1;
}

/*void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	if (split)
	{
		while (split[i] != NULL)
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
}*/

/*int main(void)
{
    char    a[] = "abcdefghilmnopq";
    char    c;
    char    **split;
    int     i;

    c = 'h';
    i = 0;
    split = ft_split(a, c);
    while (split[i] != NULL)
    {
        printf("%s\n", split[i]);
        i++;
    }
    ft_free_split(split);

    return (0);
}*/
