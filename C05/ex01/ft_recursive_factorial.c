/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:43:28 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/28 16:17:52 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	resultado;

	if (nb < 0)
	{
		resultado = 0;
	}
	if (nb == 0 || nb == 1)
	{
		resultado = 1;
	}
	if (nb > 0)
	{
		resultado = nb * ft_recursive_factorial(nb - 1);
	}
	return (resultado);
}
// int	main(void)
// {
// 	int	resultado = ft_recursive_factorial("ASDAD");
// 	printf("%i\n", resultado);
// }
