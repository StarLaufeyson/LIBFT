/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:32:51 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/15 17:32:53 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//asigna memoria dinamicamente para un arreglo de elementos 
void	*ft_calloc(size_t num_elements, size_t size)
{
	size_t total_size;
	void *ptr;
	
	total_size = num_elements * size;
	ptr = malloc(num_elements, total_size);
	ft_bzero(result, num_elements * size);
	return (ptr);
}

int	main(void)
{
	int	*numbers;
	size_t	num_elements;
	size_t	i;

	num_elements = 5;
	i = 0;
	numbers = ft_calloc(num_elements, sizeof(int));
	if (numbers == NULL)
	{
		printf("Error al asignar memoria.\n");
		return (1);
	}
	while (i < num_elements)
	{
		printf("%d\n, numbers[i]");
		i++;
	}
	printf("\n");
	free (numbers);
	return (0);
}
