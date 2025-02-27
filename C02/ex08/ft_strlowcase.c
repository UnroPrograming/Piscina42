/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:17:58 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/19 16:18:11 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
// int main(void)
// {
// 	char *frase = "Hola mundo";
// 	char *str = (char *)malloc((strlen(frase) + 1) * sizeof(char));
// 	strcpy(str, frase);
// 	printf("Original: %s\n", str);
// 	ft_strlowcase(str);
// 	printf("Uppercase: %s\n", str);
// 	free(str);
// }
