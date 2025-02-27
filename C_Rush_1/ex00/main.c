/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedrano <mmedrano@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:54:25 by mmedrano          #+#    #+#             */
/*   Updated: 2024/08/18 11:32:44 by mmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cabecera.h"
#include <unistd.h>
#include "checks.c"
#include "gestion_mapa.c"
#include "resolver.c"
#include "validar_input.c"

int	main(int argc, char **argv)
{
	int	size;
	int	**n_cajas;

	argc = 2;
	argv[1] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

	size = 4;
	if (argc != 2 || !input_valida(argv[1], size))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	n_cajas = procesar_input(argv[1], size);
	solucion(n_cajas, size);
	liberar_mapa(n_cajas, size);
	return (0);
}
