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

void	*ft_memset(void *b, int c, size_t len);

void	*ft_calloc(size_t num_elements, size_t size)
{
	size_t total_size = num_elements * size;
	void *ptr = malloc(total_size);

	if (ptr != NULL)
	{
		ft_memset(ptr, 0, total_size);
	}
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
