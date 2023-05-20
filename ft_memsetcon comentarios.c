/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:30:18 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/20 18:56:16 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	*ft_memset(void *b, int c, size_t length)
{
	//establece un bloque de memoria con un valor específico
	//Tienes una serie de casillas de memoria consecutivas y desea llenarla con el caracter '#'
	unsigned char	*p; //creo una variable o pto que es unsigned char (0-255)

	p = (unsigned char *)b; //Convierto o casteo la 'b' que es void (no sabemos si es int o char) en unsigned char
	//'p' apunta a la 1ª casilla de memoria = todo lo ue haga en 'p' lo sufrirá también 'b'
	while(length >= 0) //Si son 5 el elngth por ejemplo, corre uno a uno hasta llegar a 0
	{
		*p = (unsigned char)c; //'c' era int y lo casteamos a char
		p++; //va de casilla en casilla
		length--; //va disminuyendo la longitud de las casillas hasts que se acaben
	}
	return (b);
}

int	main(void)
{
	char str[] = "Welcome to Wonderland, Alice!";
	printf("Antes de memset: %s\n", str);
	//Asignamos el valor '#' a los primeros 5 bytes de la cadena
	ft_memset(str, '#', 5);

	printf("Después de memset: %s\n", str);
	return (0);
}
