/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:32:53 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:11:32 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_isdigit verifica si un carácter dado es un dígito decimal.
Un carácter es un dígito decimal si representa un número del 0 al 9.
La función devuelve un valor distinto de cero si el carácter es un dígito
decimal y devuelve 0 si no lo es.
La implementación típica de ft_isdigit implica simplemente verificar si
el valor entero del carácter está en el rango de caracteres numéricos
del 0 al 9 utilizando una comparación. Por ejemplo, se puede usar una
instrucción if para verificar si el valor del carácter está dentro del
rango deseado. La función devuelve 1 si el carácter es un dígito decimal
y 0 si no lo es.
*/
int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char carattere;
	carattere = '9';
	printf("%d\n", ft_isdigit (carattere));
	return(0);
}*/
