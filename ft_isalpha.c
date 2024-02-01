/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:05:37 by psapio            #+#    #+#             */
/*   Updated: 2024/02/01 11:37:34 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_isalpha determina si un carácter es una letra del alfabeto. Un carácter es una letra si es una letra minúscula (a a z) o una letra mayúscula (A a Z). La función devuelve un valor distinto de cero si el carácter es una letra y devuelve 0 si no lo es. La implementación típica de ft_isalpha implica la verificación del valor ASCII del carácter para determinar si está dentro del rango de letras minúsculas o mayúsculas. Por ejemplo, se puede verificar si el carácter está en el rango de letras mayúsculas (A a Z) o si está en el rango de letras minúsculas (a a z). La función devuelve un valor basado en el resultado de estas verificaciones.
*/
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
