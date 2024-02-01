/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:02:23 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 17:00:27 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_toupper convierte un carácter en minúscula en mayúscula si es
una letra minúscula. Si el carácter no es una letra minúscula, la función
devuelve el mismo carácter sin cambios. La implementación típica de ft_toupper
implica verificar si el carácter dado está en el rango de caracteres ASCII
correspondiente a letras minúsculas ('a' a 'z'). Si es así, se realiza la
conversión restando la diferencia entre el valor ASCII de una letra minúscula
y el valor ASCII de la correspondiente letra mayúscula ('a' - 'A'). De lo
contrario, el carácter se devuelve sin cambios. Es importante destacar que
ft_toupper es útil para convertir caracteres individuales en mayúscula, lo
que puede ser útil para normalizar la entrada de texto o para comparaciones
de caracteres que no distinguen entre mayúsculas y minúsculas.
*/
int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - 32);
	else
		return (c);
}
/*int	main(void)
  {
	char	carattere;
	carattere = '8';
	printf ("%c\n", ft_toupper (carattere));
	return (0);
  }*/
