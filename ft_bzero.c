/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:16:48 by psapio            #+#    #+#             */
/*   Updated: 2024/02/01 11:31:22 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_bzero establece los primeros n bytes del bloque de memoria apuntado por s a cero ('\0'). Esto se logra iterando sobre los n primeros bytes de la memoria y asignándoles el valor cero uno por uno. El propósito principal de esta función es inicializar áreas de memoria, como buffers, antes de usarlas, asegurando que no contengan datos residuales no deseados. La función no devuelve ningún valor explícito, ya que simplemente modifica el contenido de la memoria apuntada por s.
*/
void	ft_bzero(void *s, size_t n)
{
	int	a;

	a = 0;
	while (n != 0)
	{
		((char *)s)[a] = '\0';
		n--;
		a++;
	}
}
/*i
int main(void)
{
//	char array[20]="hola estrella";
	int array_int[7]= {-1,5,200,13,1,11,10};
	size_t numberof;
	int i;

	numberof = 5;
	ft_bzero(array, numberof);
	ft_bzero(array_int, 1);	
	i = 0;
	while (i < 7)
	{
		printf("[%d]\n", array_int[i]);
		i++;
	}
}
*/
