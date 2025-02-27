/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:00:12 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/27 19:16:24 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb < 0)
	{
		resultado = 0;
	}
	while (nb > 1)
	{
		resultado *= nb;
		nb--;
	}
	return (resultado);
}
// int	main(void)
// {
// 	int resultado = ft_iterative_factorial(4);
// 	printf("%i\n", resultado);
// }
