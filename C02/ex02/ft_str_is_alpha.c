/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:11:45 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/18 18:21:00 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'z')
		{
			if (str[i] >= '[' && str[i] <= '`')
			{
				return (0);
			}
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
//int	main()
//{
// 	int i = ft_str_is_alpha("Uuuu.");
//
//	printf("%d\n", i);
//}
