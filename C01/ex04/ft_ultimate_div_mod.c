/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:56:20 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/14 19:10:34 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resultado;
	int	resto;

	resultado = *a / *b;
	resto = *a % *b;
	*a = resultado;
	*b = resto;
}
// int	main(void)
// {	
// 	int num1 = 10;
// 	int num2 = 20;	
// 	int *a;
// 	int *b;
// 	a = &num1;
// 	b = &num2;
// 	ft_ultimate_div_mod(a, b);
// 	printf("%d\n", *a);
// 	printf("%d\n", *b);
// 	return(0);
// }
