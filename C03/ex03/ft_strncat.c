/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:12:42 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/24 18:08:26 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main(void)
// {
//     char dest[50] = "Hola, ";
//     char src[] = "Mundo";
//     ft_strncat(dest, src, 0);
//     printf("%s\n", dest);
// }
