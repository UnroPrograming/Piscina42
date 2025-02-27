/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestion_mapa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedrano <mmedrano@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:14:53 by mmedrano          #+#    #+#             */
/*   Updated: 2024/08/18 11:06:27 by mmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "cabecera.h"

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	**crear_mapa(int size)
{
	int	**mapa;
	int	i;

	i = 0;
	//Reserva la memoria para los arrays de ints
	mapa = (int **)malloc(size * 8);

	//Reserva la memoria para los ints dentro de los arrays
	while (i < size)
	{
		mapa[i] = (int *)malloc(size * 4);
		//En caso de fallar la reserva libera las reservas realizadas anteriormente y retorna NULL
		if (!mapa[i])
		{
			while (--i >= 0)
				free(mapa[i]);
			free(mapa);
			return (NULL);
		}
		i++;
	}

	//Retorna el mapa con las reservas de memoria
	return (mapa);
}

void	liberar_mapa(int **mapa, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(mapa[i]);
		i++;
	}
	free(mapa);
}

void	print_mapa(int **mapa, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			ft_putnbr(mapa[i][j]);
			if (j < size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
