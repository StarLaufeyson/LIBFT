/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:27:34 by eluno-la          #+#    #+#             */
/*   Updated: 2023/06/16 20:21:58 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	ft_count_word(char const *s, char c)
{
	unsigned int	i;
	unsigned int	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_words(char const *s, char c, int i)
{
	unsigned int	size;

	size = 0;
	while (s[i] && s[i] != c)
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **str, int str_len)
{
	while (str_len-- > 0)
		free(str[str_len]);
	free (str);
}

char	**ft_split(char const *s, char c)
{
	char			**result;
	unsigned int	i;
	int				start;

	if (!s)
		return (NULL);
	i = 0;
	start = -1;
	result = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!result)
		return (NULL);
	while (++start < ft_count_word(s, c))
	{
		while (s[i] == c)
			i++;
		result[start] = ft_substr(s, i, ft_size_words(s, c, i));
		if (!(result[start]))
		{
			ft_free(result, start);
			return (0);
		}
		i += ft_size_words(s, c, i) + 1;
	}
	result[start] = 0;
	return (result);
}

/*int main(void)
{
    char    a[] = "abcdefghilmnopq";
    char    c;
    char    **split;
    int     i;

    c = 'h';
    i = 0;
    //Obtener el arreglo de subcadenas utilizando ft_split
    split = ft_split(a, c);
    while (split[i] != NULL)
    {
        printf("%s\n", split[i]);
        i++;
    }
    //Liberar memoria
    ft_free_split(split);

    return (0);
}
*/
