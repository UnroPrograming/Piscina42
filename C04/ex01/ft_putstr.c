/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:19:16 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/15 12:20:57 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &(str[count]), 1);
		count++;
	}
}
// int	main(void)
// {
// 	char *str;
// 	str = "UwU";	
// 	ft_putstr(str);
// 	return(0);
// }
