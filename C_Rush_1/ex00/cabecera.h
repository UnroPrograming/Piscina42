/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cabecera.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedrano <mmedrano@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:59:10 by mmedrano          #+#    #+#             */
/*   Updated: 2024/08/18 10:59:23 by mmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CABECERA_H

void	ft_putnbr(int n);
int	**crear_mapa(int size);
void	liberar_mapa(int **mapa, int size);
void	print_mapa(int **mapa, int size);
int	pos_valida(int **mapa, int size, int fil, int col, int valor);
int     resolver(int **mapa, int size, int fil, int col, int **n_cajas);
void    solucion(int **n_cajas, int size);
int     input_valida(char *input, int size);
int     **procesar_input(char *input, int size);
int	check_fil(int **mapa, int size, int fil, int valor);
int	check_col(int **mapa, int size, int col, int valor);
int	check_vistas(int **mapa, int size, int **n_cajas);
int	check_vista_direccion(int **mapa, int size, int index, int direccion, int vista_esperada);
