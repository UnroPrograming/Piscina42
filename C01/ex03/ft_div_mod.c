/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:35:11 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/14 18:52:58 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int	main(void)
// {
// 	int *div;
// 	int *mod;
// 	int a;
// 	int b;
// 	a = 2;
// 	b = 3;
// 	div = &a;
// 	mod = &b;
// 	ft_div_mod(3, 2, div, mod);	
// 	printf("%d\n", *div);
// 	printf("%d\n", *mod);
// 	return(0);
// }
