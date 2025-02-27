/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:25:41 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/29 19:51:05 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			ft_printstr(av[i]);
			i++;
		}
	}
	return (0);
}
