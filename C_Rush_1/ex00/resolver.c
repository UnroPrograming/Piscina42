/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedrano <mmedrano@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:19:19 by mmedrano          #+#    #+#             */
/*   Updated: 2024/08/18 11:58:51 by mmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "cabecera.h"

int	pos_valida(int **mapa, int size, int fil, int col, int valor)
{
	return (check_fil(mapa, size, fil, valor)
		&& check_col(mapa, size, col, valor));
}

int	resolver(int **mapa, int size, int fil, int col, int **n_cajas)
{
	int	valor;

	valor = 1;
	//Comprueba las vistas
	if (fil == size)
		return (check_vistas(mapa, size, n_cajas));
	//Salta a la siguiente fila
	if (col == size)
		return (resolver(mapa, size, fil + 1, 0, n_cajas));
	//Recorre la columna
	while (valor <= size)
	{
		if (pos_valida(mapa, size, fil, col, valor))
		{
			mapa[fil][col] = valor;
			if (resolver(mapa, size, fil, col + 1, n_cajas))
				return (1);
			mapa[fil][col] = 0;
		}
		valor++;
	}
	return (0);
}

void	solucion(int **n_cajas, int size)
{
	int	**mapa;
	int	i;
	int	j;

	mapa = crear_mapa(size);
	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			mapa[i][j] = 0;
			j++;
		}
		i++;
	}
	if (resolver(mapa, size, 0, 0, n_cajas))
		print_mapa(mapa, size);
	else
		write(1, "Error\n", 6);
	liberar_mapa(mapa, size);
}
