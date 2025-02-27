/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:28:35 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/21 18:21:28 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_put_may(char c)
{
	return (c - 32);
}

int	ft_is_num_o_letra(char c)
{
	int	numb_or_letter;
	int	condition1;
	int	condition2;
	int	condition3;

	numb_or_letter = 0;
	condition1 = c >= '0' && c <= 'z';
	condition2 = c >= ':' && c <= '@';
	condition3 = c >= '[' && c <= '`';
	if (condition1 && !condition2 && !condition3)
	{
		numb_or_letter = 1;
	}
	return (numb_or_letter);
}

int	ft_is_letra_min(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (ft_is_letra_min(str[0]))
	{
		str[0] = ft_put_may(str[0]);
	}
	i++;
	while (str[i] != '\0')
	{
		if (ft_is_letra_min(str[i]) && !ft_is_num_o_letra(str[i - 1]))
		{
			str[i] = ft_put_may(str[i]);
		}
		i++;
	}
	return (str);
}
