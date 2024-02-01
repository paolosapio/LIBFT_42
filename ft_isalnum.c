/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:45:39 by psapio            #+#    #+#             */
/*   Updated: 2024/02/01 11:36:15 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_isalnum determina si un carácter es alfanumérico. Un carácter es alfanumérico si es una letra (a a z o A a Z) o un dígito (0 a 9). La función devuelve un valor distinto de cero si el carácter es alfanumérico y devuelve 0 si no lo es. La implementación típica de ft_isalnum implica la verificación del valor ASCII del carácter para determinar si está dentro del rango de letras o dígitos. Por ejemplo, se puede verificar si el carácter está en el rango de letras mayúsculas o minúsculas (A a Z o a a z) o si está en el rango de dígitos (0 a 9). La función devuelve un valor basado en el resultado de estas verificaciones.
*/
int	ft_isalnum(int c)
{
	return (((c >= 'a') && (c <= 'z'))
		|| ((c >= 'A') && (c <= 'Z'))
		|| ((c >= '0') && (c <= '9')));
}
/*
int	main(void)
{
	char	value;

	value = 'F';
	printf("%d\n", ft_isalnum(value));
}*/
