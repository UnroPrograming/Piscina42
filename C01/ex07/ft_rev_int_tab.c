/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:52:39 by jbastida          #+#    #+#             */
/*   Updated: 2024/08/24 14:33:34 by jbastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size)
	{
		aux = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = aux;
		size--;
		i++;
	}
}
// int main(void)
// {
//     int tab[] = {1, 2, 3, 4, 5};
//     int size = sizeof(tab) / sizeof(tab[0]);
// 	ft_rev_int_tab(tab, 5);
//     printf("Array invertido: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");
// }
