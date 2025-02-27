/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:54:43 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/19 16:10:17 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
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
// 	ft_strupcase(str);
// 	printf("Uppercase: %s\n", str);
// 	free(str);
// }
// int main(void) 
// {
//     char str[] = "Hola mundo";
//     printf("Original: %s\n", str);
//     ft_strupcase(str);
//     printf("Uppercase: %s\n", str);
//     return 0;
// }
