/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:26:55 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/04 17:39:40 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

void	ft_div_mod(int a, int b, int *div, int *mod);

/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 50;
	b = 7;

	ft_div_mod(a, b, &div, &mod);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("a dividido b: %d\n", div);
	printf("o resto da divisão de a : %d\n", mod);
}
*/
