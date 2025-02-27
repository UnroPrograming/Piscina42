/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedrano <mmedrano@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:07:06 by mmedrano          #+#    #+#             */
/*   Updated: 2024/08/18 11:52:30 by mmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cabecera.h"

//Comprueba que ningún número coincida de la fila
int	check_fil(int **mapa, int size, int fil, int valor)
{
	int	col;

	col = 0;
	while (col < size)
	{
		if (mapa[fil][col] == valor)
			return (0);
		col++;
	}
	return (1);
}

//Comprueba que ningún número coincida de la columna
int	check_col(int **mapa, int size, int col, int valor)
{
	int	fil;

	fil = 0;
	while (fil < size)
	{
		if (mapa[fil][col] == valor)
			return (0);
		fil++;
	}
	return (1);
}

//Comprueba que se ven el número de cajas introducidas por el usuario
int	check_vistas(int **mapa, int size, int **n_cajas)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!check_vista_direccion(mapa, size, i, 0, n_cajas[0][i])
		|| !check_vista_direccion(mapa, size, i, 1, n_cajas[1][i])
		|| !check_vista_direccion(mapa, size, i, 2, n_cajas[2][i])
		|| !check_vista_direccion(mapa, size, i, 3, n_cajas[3][i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_vista_direccion(int **mapa, int size, int index, int direccion, int vista_esperada)
{
	int	i;
	int	max;
	int	cont;
	int	altura;

	cont = 0;
	max = 0;
	//i = 0 -> Cuando son direcciones que queremos incrementar
	if (direccion == 0 || direccion == 2)
		i = 0;
	//i = 3 -> Cuando son direcciones que queremos reducir
	else
		i = size - 1;
	//Recorre teniendo en cuenta las direcciones
	while ((direccion % 2 == 0 && i < size) || (direccion % 2 != 0 && i >= 0))
	{
		if (direccion < 2)
			altura = mapa[i][index];
		else
			altura = mapa[index][i];
		if (altura > max)
		{
			max = altura;
			cont++;
		}
		if (direccion % 2 == 0)
			i += 1;
		else
			i -= 1;
	}
	//Comprueba que la posición de la altura max es la esperada
	return (cont == vista_esperada);
}
