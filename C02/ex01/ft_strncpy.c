/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:59:32 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/24 16:37:20 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// int main()
// {
// 	char *src;
// 	char dest[50];
// 	src = "UwU";
// 	ft_strncpy(dest, src, 2);
// 	printf("Cadena original (src): %s\n", src);
// 	printf("Cadena copiada (dest): %s\n", dest);
// }
