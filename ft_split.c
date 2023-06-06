/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:22:25 by marvin            #+#    #+#             */
/*   Updated: 2023/06/06 12:22:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

//es estática, lo que significa que solo es visible dentro de este archivo. 
//Toma dos argumentos: s, que es un puntero a una cadena constante
//y c, que es el carácter delimitador
size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;

	i = 0;
	while (*src && (i + 1 < dest_size))
	{
		*dest++ = *src++;
		i++;
	}
	if (dest_size > 0)
	{
		*dest = '\0';
	}
	while (*src++)
	i++;
	return (i);
}

//es estática, lo que significa que solo es visible dentro de este archivo. 
//Toma dos argumentos: s, que es un puntero a una cadena constante
//y c, que es el carácter delimitador
static int	ft_count_word(char const *s, char c)
{
    int i; //i se utilizará para recorrer la cadena s
    int word; //word se usará para contar el número de subcadenas encontradas

    i = 0;
    word = 0;
//mientras s no sea nulo y el carácter actual al que s[i] apunta no sea '\0' (s[i])
    while (s && s[i])
    {
        if (s[i] != c) //si el carácter actual s[i] es diferente del delimitador c
        {
            word++; // se incrementa el contador word, se ha encontrado una nueva subcadena
            while (s[i] != c && s[i]) //para avanzar i hasta encontrar el siguiente delimitador c
                i++;
        }
        else
            i++;
    }
    return (word);
}

//Toma 3 argumentos: s, que es un puntero a una cadena constante
//c, que es el carácter delimitador
//i, que es el índice de inicio en la cadena s
static int  ft_size_words(char const *s, char c, int i)
{
    int     size; //se utilizará para contar el tamaño de la palabra.
    //char    *word;

    size = 0;
    while (s[i] != c && s[i])
    {
        size++;
        i++;
    }

    /*if (size > 0)
    {
        word = (char *)malloc((size + 1) * sizeof(char));
        //asignar memoria para la palabra
        if (word)
        {
            ft_strlcpy(word, s + i - size, size); //copiar la palabra en la memoria aisgnada
            word[size] = '\0'; //agregar nulo al final
        }   
    }
    else
    {
        word = (NULL);
    }*/

    return (size);
}

void    ft_free_split(char **split)
{
    int i;

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
}

char **ft_split(char const *s, char c)
{
    int word_count;
    char    **result;
    int i;
    int start;
    int size;

    word_count = ft_count_word(s, c); //Obtener nº total subcadenas
    i = 0;
    start = 0;
    result = (char **)malloc((word_count + 1) * sizeof(char *));
//asignar memoria para el arreglo resultante
    if (!result)
        return (NULL);
    
    while (*s)
    {
        if (*s == c)
        {
        //si ptr 's' apunta a un caract q no sea el 1ro de la cadena
            if (s > s - 1 && *s - 1 != c)
            {
                size = ft_size_words(s - 1, c, start);
                result[i] = (char *)malloc((size + 1) * sizeof(char));;
            //utilizar ft_size_words para obtener palabra actual
                if (result[i])
                {
                    ft_strlcpy(result[i], s - size, size);
                    result[i][size] = '\0';
                    i++;
                }
            }
            start = 0;
        }
        else if (start++ == 0)
            start = s - 1;
        s++;
    }

    result[i] = NULL;
    //Obtener ultima palabra después del bucle
    ft_free_split(result);

    return (result);
}

int main(void)
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

