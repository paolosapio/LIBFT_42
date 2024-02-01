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
/*
La función ft_isprint verifica si un carácter dado es un carácter imprimible
en el conjunto de caracteres ASCII estándar. Un carácter es imprimible si es
visible y puede ser impreso en pantalla. En el conjunto de caracteres
ASCII estándar, los caracteres imprimibles tienen un valor ASCII entre
32 y 126, inclusive. La función devuelve un valor distinto de cero si
el carácter es imprimible y devuelve 0 si no lo es.
La implementación típica de ft_isprint implica simplemente verificar si el
valor entero del carácter está en el rango de caracteres imprimibles
utilizando una comparación. Por ejemplo, se puede usar una instrucción
if para verificar si el valor del carácter está dentro del rango deseado.
La función devuelve 1 si el carácter es imprimible y 0 si no lo es.
*/
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
