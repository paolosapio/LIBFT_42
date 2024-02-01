/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:01:53 by psapio            #+#    #+#             */
/*   Updated: 2024/02/01 11:31:07 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_strrchr busca la última aparición del carácter c en la
cadena s y devuelve un puntero a la posición de memoria del último carácter
encontrado dentro de la cadena. Si el carácter c no está presente en la
cadena s, la función devuelve NULL. Esta función es útil para buscar la
última presencia de un carácter específico dentro de una cadena, como en
la implementación de algoritmos de búsqueda o análisis de cadenas de texto.
La implementación típica de ft_strrchr implica iterar sobre la cadena s en
sentido inverso, comenzando desde el último carácter antes del carácter nulo
terminador '\0' y retrocediendo hasta encontrar la última ocurrencia del
carácter c. Una vez encontrado, la función devuelve un puntero a esa posición
de memoria. Si no se encuentra ninguna ocurrencia del carácter c,
la función devuelve NULL. 
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
/*
   int main(void)
   {
   const char *string="viva la vida Paolo";
   int alert_word;

   alert_word = 'P';
   printf ("%s\n", ft_strrchr(string, alert_word));
   printf ("%s\n", strrchr(string, alert_word));
}*/
