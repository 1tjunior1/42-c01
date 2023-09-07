/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:06:29 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/04 17:22:42 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	troca;

	troca = *b;
	*b = *a;
	*a = troca;
}

void	ft_swap(int *a, int *b);
/*
int	main(void)
{
	int	swapa;
	int	swapb;
	int	*ponta;
	int	*pontb;

	swapa = 10;
	swapb = 20;
	ponta = &swapa;
	pontb = &swapb;
	ft_swap(ponta, pontb);
	printf("%d\n", *ponta);
	printf("%d\n", *pontb);
}
*/
