/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:15:29 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/18 18:10:20 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main()
// {
// 	char *src;
// 	char dest[50];
// 	src = "UwU";
// 	ft_strcpy(dest, src);
// 	printf("Cadena original (src): %s\n", src);
// 	printf("Cadena copiada (dest): %s\n", dest);
// }	
