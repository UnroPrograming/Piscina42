/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:19:44 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/28 16:20:29 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultado;

	i = 0;
	resultado = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < (power - 1))
	{
		resultado *= nb;
		i++;
	}
	return (resultado);
}
// int	main(void)
// {
// 	printf("%i\n",ft_iterative_power(-2, -4));
// }
