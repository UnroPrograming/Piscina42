/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validar_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedrano <mmedrano@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:03:43 by mmedrano          #+#    #+#             */
/*   Updated: 2024/08/18 11:04:01 by mmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cabecera.h"

int	input_valida(char *input, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*input)
	{
		if (*input >= '0' && *input <= '9')
			i++;
		else if (*input != ' ')
			return (0);
		input ++;
	}
	if (i == size * 4)
		return (1);
	else
		return (0);
}

//Mete los datos del input en un cuadrado de n tamaño
int	**procesar_input(char *input, int size)
{
	int	**n_cajas;
	int	i;

	n_cajas = crear_mapa(size);
	i = 0;
	//Aquí no tendría que ser size * size????? -> No, porque el segundo 4 se refiere al número de lados
	while (i < size * 4)
	{
		while (*input == ' ')
			input++;
		n_cajas[i / size][i % size] = *input - '0';
		input++;
		i++;
	}
	return (n_cajas);
}
