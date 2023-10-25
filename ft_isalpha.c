/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:05:37 by psapio            #+#    #+#             */
/*   Updated: 2023/10/17 14:58:13 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <ctype.h>
#include <stdio.h>*/

int	ft_isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char carattere;
	carattere = '?';
	printf("%d\n", ft_isalpha (carattere));
	return(0);
}*/
