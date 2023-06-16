/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:52:01 by eluno-la          #+#    #+#             */
/*   Updated: 2023/06/16 20:29:18 by eluno-la         ###   ########.fr       */
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

	if (s1 == NULL || set == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	start = 0;
	end = s1_len;
	while ((s1[start]) && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim_len = end - start;
	trim = (char *)malloc((trim_len + 1) * sizeof(char));
	if (trim == NULL)
		return (NULL);
	ft_strlcpy(trim, s1 + start, trim_len +1);
	return (trim);
}

/*int	main(void)
=======
  
//Obtenemos la longitud de la cadena s1
	s1_len = ft_strlen(s1);
	
 //Inicializamos los índices de inicio y fin de la cadena a recortar
  start = 0;
	end = s1_len - 1;
  
//Verificamos si s1 o set son nulos
	if (s1 == NULL || set == NULL)
		return (NULL);
    
//Avanzamos el índice de inicio hasta el primer carácter que no está en el conjunto set
	while (start < s1_len && ft_strchr(set, s1[start]) != NULL)
		start++;
    
//Retrocedemos el índice de fin hasta el último carácter que no está en el conjunto set
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
    
 //Calculamos la longitud de la cadena recortada
	trim_len = end - start;
  
 //Asignamos memoria para la cadena recortada
	trim = (char *)malloc(sizeof(char) * (trim_len + 1));
	if (trim == NULL)
		return (NULL);
 //Copiamos los caracteres de s1 desde el índice de inicio hasta el índice de fin de la cadena recortada
	ft_strlcpy(trim, s1 + start, trim_len + 1);
  
//Agregamos el carácter nulo al final de la cadena recortada
	//trim[trim_len] = '\0';
  
//Retornamos la cadena recortada
	return (trim);
}

int	main(void)
>>>>>>> 68602ceb188baaabc9699d7a9c1c6a66652d8b4b
{
	char	*s1 = "  Welcome to Hogwarts!  ";
	char	*set = " ";

	char	*trim = ft_strtrim(s1, set);

	if (trim != NULL)
	{
		printf("Original: \"%s\"\n", s1);
		printf("Trimmed: \"%s\"\n", trim);
		free(trim);
	}
	return (0);
<<<<<<< HEAD
}*/
=======
}
>>>>>>> 68602ceb188baaabc9699d7a9c1c6a66652d8b4b
