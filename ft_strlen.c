/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:06:46 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/05 14:49:37 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

/*int	main(void)
{
	char sonho[] = "vamos passar nessa bagaça, virar cadete parça";

	printf("%s tem %d caracteres", sonho, ft_strlen(sonho));

	return (0);
}*/
