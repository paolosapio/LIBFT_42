/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:39:32 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:57:42 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_tolower convierte un carácter en mayúscula en minúscula si es
una letra mayúscula. Si el carácter no es una letra mayúscula, la función
devuelve el mismo carácter sin cambios. La implementación típica de
ft_tolower implica verificar si el carácter dado está en el rango de
caracteres ASCII correspondiente a letras mayúsculas ('A' a 'Z').
Si es así, se realiza la conversión sumando la diferencia entre el valor
ASCII de una letra mayúscula y el valor ASCII de la correspondiente letra
minúscula ('A' - 'a'). De lo contrario, el carácter se devuelve sin cambios.
Es importante destacar que ft_tolower es útil para convertir caracteres
individuales en minúscula, lo que puede ser útil para normalizar la entrada
de texto o para comparaciones de caracteres que no distinguen entre
mayúsculas y minúsculas.
*/
int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	else
		return (c);
}
/*int	main(void)
{
	char	carattere;

	carattere = 'A';
	printf ("%c\n", ft_tolower(carattere));
	return (0);
}*/
