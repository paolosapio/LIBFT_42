/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:45:36 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:39:03 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_strmapi recorre la cadena de caracteres s y aplica la
función f a cada carácter de la cadena, pasando como argumento el índice
de cada carácter. La función f debe ser una función que toma como argumentos
un índice entero y un carácter, y devuelve un nuevo carácter resultado de
aplicar alguna operación a ese carácter en particular. La función ft_strmapi
devuelve una nueva cadena de caracteres que contiene los caracteres
resultantes después de aplicar la función f a cada uno. La implementación
típica de ft_strmapi implica un bucle que itera sobre los caracteres de la
cadena s, pasando el índice de cada carácter a la función f junto con una
referencia al carácter correspondiente. La función f puede realizar cualquier
operación deseada en el carácter basándose en el índice proporcionado y
devolver el resultado. La nueva cadena resultante se construye concatenando
los caracteres resultantes devueltos por f. Es importante destacar que
ft_strmapi permite aplicar una operación personalizada a cada carácter de
una cadena y es útil para realizar transformaciones específicas en una
cadena de caracteres.
*/
/*
char	randomize_conversor(unsigned int none, char c)
{
	char	a;

	a = (int)(c + none);
	return (a);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	size_t			len;
	char			*newstring;

	len = 0;
	while (s[len] != '\0')
		len++;
	newstring = (char *)malloc(len + 1);
	if (newstring == NULL)
		return (NULL);
	newstring[len] = '\0';
	i = 0;
	while (i < len)
	{
		newstring[i] = f(i, s[i]);
		i++;
	}
	return (newstring);
}
/*
int	main(void)
{
	char	stringc [] = "hola Lucia";

	printf("%s\n",stringc);
	printf("%s\n",ft_strmapi(stringc, randomize_conversor));
	free (ft_strmapi(stringc, randomize_conversor));
	return (0);
}*/
