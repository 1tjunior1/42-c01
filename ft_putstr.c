/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:58:44 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/04 18:07:12 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &(*str), 1);
		str++;
	}
}

void	ft_putstr(char *str);
/*
int	main(void)
{
	char	jaspion [] = "jaspion daileon";
	char	*jJaspion = jaspion;

	ft_putstr(jJaspion);
}
*/
