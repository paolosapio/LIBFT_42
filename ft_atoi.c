/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:45:44 by psapio            #+#    #+#             */
/*   Updated: 2024/02/01 11:17:42 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_atoi convierte una cadena de caracteres en un número entero.
Para lograr esto, la función analiza la cadena de entrada y extrae el valor
numérico representado por la cadena. Primero, la función ignora cualquier
espacio en blanco inicial en la cadena. Luego, determina el signo del número
(positivo o negativo) leyendo el primer carácter de la cadena. Después,
la función recorre la cadena, extrayendo y acumulando los dígitos numéricos
encontrados hasta que alcanza un carácter que no es un dígito. Finalmente,
devuelve el número entero resultante.
*/
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	conversion;

	i = 0;
	sign = 1;
	conversion = 0;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((nptr[i] != '\0') && ((nptr[i] >= '0') && (nptr[i] <= '9')))
	{
		conversion = conversion * 10;
		conversion = conversion + nptr[i] - '0';
		i++;
	}
	conversion = conversion * sign;
	return (conversion);
}
/*
int	main(void)
{
	char	number[] = "2147483648";
	int		result;

	result = atoi(number);
	printf("%d\n", result);
}*/
