/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:16:48 by psapio            #+#    #+#             */
/*   Updated: 2023/10/24 12:44:09 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	a;

	a = 0;
	while (n != 0)
	{
		((char *)s)[a] = '\0';
		n--;
		a++;
	}
}
/*
int main(void)
{
	 char array[20]="hola estrella";
	 size_t numberof;

	 numberof = 7;
	 ft_bzero(array, numberof);
	 printf("[%s]\n", array);
}*/
