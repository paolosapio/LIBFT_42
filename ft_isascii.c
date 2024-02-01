/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:41:07 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:09:32 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_isascii verifica si un carácter dado tiene un valor ASCII válido.
Un carácter tiene un valor ASCII válido si su valor está en el rango de
0 a 127, inclusive. La función devuelve un valor distinto de cero si el
carácter es un valor ASCII válido y devuelve 0 si no lo es. La implementación
típica de ft_isascii implica simplemente verificar si el valor entero del
carácter está en el rango de 0 a 127 utilizando una comparación. Por ejemplo,
se puede usar una instrucción if para verificar si el valor del carácter
está dentro del rango deseado. La función devuelve 1 si el carácter es un
valor ASCII válido y 0 si no lo es.
*/
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
