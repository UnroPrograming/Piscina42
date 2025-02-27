/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:55:30 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/26 19:26:34 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (i < n)
	{
		if (s1[i] && !s2[i])
			return (1);
		else if (!s1[i] && s2[i])
			return (-1);
	}
	return (0);
}
//int	main(void)
//{
//	printf("%i", ft_strncmp("Hola", "Holaaaaa", 2));
//}
