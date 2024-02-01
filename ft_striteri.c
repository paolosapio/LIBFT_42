/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:21:33 by psapio            #+#    #+#             */
/*   Updated: 2023/11/18 20:19:33 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_striteri recorre la cadena de caracteres s y aplica la
función f a cada carácter de la cadena, pasando como argumento el índice de
cada carácter. La función f debe ser una función que toma como argumentos un
índice entero y una referencia al carácter correspondiente en la cadena.
Esta función es útil cuando se necesita aplicar una operación específica
a cada carácter de una cadena y se necesita tener acceso al índice de cada
carácter mientras se realiza la operación. La implementación típica de
ft_striteri implica un bucle que recorre la cadena de caracteres s, pasando
el índice de cada carácter a la función f junto con una referencia al
carácter correspondiente. La función f puede realizar cualquier operación
deseada en el carácter, basándose en el índice proporcionado. Esta función
es especialmente útil para transformaciones o manipulaciones específicas
de caracteres en una cadena.
*/
/*
void	upper(unsigned int iterador, char *frase)
{
	frase[iterador] = ft_toupper(frase[iterador]);
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main(void)
{
	char arrayc [] = "viva la vida";
	ft_striteri(arrayc, upper);
	//printf("%s\n", arrayc);
	printf("b\n");
}*/
