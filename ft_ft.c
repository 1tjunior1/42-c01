/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:39:45 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/04 16:42:48 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_ft(int *nbr);	
/*
int main(void)
{
    int *nbr;
    int	numero;

    numero = 1;
    nbr = &numero;
    ft_ft(nbr);
    printf("%d\n", numero);
    return(0);   
}*/
