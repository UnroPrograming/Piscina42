/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:57:16 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/18 15:19:25 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	while (num1 <= 7)
	{
		num2 = num1 + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				put_char(num1 + '0');
				put_char(num2 + '0');
				put_char(num3 + '0');
				if (num1 < 7)
					write(1, ", ", 2);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
//int	main(void)
//{
//	ft_print_comb();
//}
