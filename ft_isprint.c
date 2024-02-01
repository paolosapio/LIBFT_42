/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:19:11 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:14:09 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	return ((c > 31) && (c < 127));
}
/*
int	main(void)
{
	int letter;

	letter = '\0';
	printf("%d\n",ft_isprint(letter));
}*/
