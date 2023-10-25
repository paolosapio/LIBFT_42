/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:41:07 by psapio            #+#    #+#             */
/*   Updated: 2023/10/19 14:01:01 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <ctype.h>
#include <stdio.h>*/
int	ft_isascii(int c)
{
	return ((c >= 0) && (c <= 127));
}
/*
int main(void)
{
	char *letter;
	
	letter = "viva la vida";
	printf("%d\n",ft_isascii(letter[0]));
	printf("%d\n",isascii(letter[0]));
}*/
