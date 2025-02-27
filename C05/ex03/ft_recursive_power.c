/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:18:44 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/28 16:36:33 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	resultado;

	resultado = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
// int	main(void)
// {
// 	int resultado = ft_recursive_power(2, 3);
// 	printf("%i\n", resultado);
// 	return (0);
// }
