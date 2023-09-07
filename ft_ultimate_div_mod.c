/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:42:55 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/04 17:56:43 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n1;
	int	n2;

	n1 = *a / *b;
	n2 = *a % *b;
	*a = n1;
	*b = n2;
}

void	ft_ultimate_div_mod(int *a, int *b);
/*
int	main(void)
{
	int	n1 = 74553;
	int	n2 = 443;
	int	*a = &n1;
	int	*b = &n2;

	ft_ultimate_div_mod(a, b);

	printf("%d\n", *a);
	printf("%d\n", *b);
}
*/
