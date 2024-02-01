/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:06:14 by psapio            #+#    #+#             */
/*   Updated: 2023/11/15 21:26:47 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_itoa convierte un número entero en una cadena de caracteres.
Toma un número entero n como argumento y devuelve una cadena de caracteres
que representa ese número. La cadena resultante representa el número en
base 10 y tiene en cuenta el signo del número. La función asigna dinámicamente
memoria para la cadena resultante y la devuelve como un puntero.
La implementación típica de ft_itoa implica la determinación del número de
dígitos en el número entero n, la asignación de memoria suficiente para
almacenar la cadena resultante (incluido el espacio para el signo,
si es necesario), la conversión de cada dígito en caracteres ASCII
correspondientes y la construcción de la cadena resultante.
Se debe tener en cuenta el manejo adecuado de casos especiales,
como números negativos y el número 0.
Es importante recordar que la cadena devuelta por ft_itoa es dinámicamente
asignada y debe ser liberada utilizando free cuando ya no se necesite para
evitar fugas de memoria.
*/
char	*ft_itoa(int n)
{
	char		*array;
	size_t		counter;
	long int	n_twin;

	n_twin = (long int)n;
	counter = 0;
	if ((long int)n <= 0)
		counter++;
	while ((n_twin != 0) && (counter++ >= 0))
		n_twin = n_twin / 10;
	array = ft_calloc(counter + 1, sizeof(char));
	if (array == NULL)
		return (NULL);
	n_twin = (long int)n;
	if ((long int)n < 0)
		(n_twin = (long int)n * -1);
	while (counter-- != 0)
	{
		array[counter] = n_twin % 10 + '0';
		n_twin = n_twin / 10;
	}
	if ((long int)n < 0)
		array[0] = '-';
	return (array);
}
/*
int	main(void)
{
    char *res = ft_itoa(-2147483648);
    printf("%s",res);
    free(res);
}*/
