/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:14:19 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/18 15:22:41 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = -1;
	num2 = 0;
	while (num1 < 98)
	{
		num1++;
		num2 = num1;
		while (num2 < 99)
		{
			num2++;
			ft_put_char(num1 / 10 + '0');
			ft_put_char(num1 % 10 + '0');
			write(1, " ", 1);
			ft_put_char (num2 / 10 + '0');
			ft_put_char (num2 % 10 + '0');
			if (num1 != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
//int	main(void)
//{
//	ft_print_comb2();
//}
