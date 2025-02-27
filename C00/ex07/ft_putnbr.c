/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:28:11 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/18 15:30:44 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_put_char('8');
	}
	else if (nb < 0)
	{
		ft_put_char('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_put_char(nb % 10 + '0');
	}
}
//int main(void)
//{
//    ft_putnbr(-9);
//}
