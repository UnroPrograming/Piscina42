/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:21:36 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/18 15:50:42 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count++);
}
// int	main(void)
// {
// 	char *str;
// 	str = "UwU";
// 	char numb = ft_strlen(str) + '0';
// 	write(1, &numb, 1);
// }
