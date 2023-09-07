/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:10:32 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/05 14:50:23 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	troca;

	i = 0;
	while (i < (size / 2))
	{
		troca = tab[i];
		tab [i] = tab [size - 1 - i];
		tab[size - 1 - i] = troca;
		i++;
	}
}
/*int	main(void)
{
	int	tab [5] = {0, 1, 2, 3, 4};
	int	size;
	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d ", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
