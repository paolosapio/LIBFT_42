/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:37:38 by psapio            #+#    #+#             */
/*   Updated: 2023/11/21 10:28:32 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_putnbr_fd es una versión personalizada de la
función printf("%d", n), que imprime un número entero seguido de un salto
de línea en el descriptor de archivo especificado por fd.
La función ft_putnbr_fd imprime el número entero n seguido de un salto de
línea en el descriptor de archivo especificado por fd. Esta función convierte
el número entero en formato de cadena de caracteres y luego imprime esa
cadena utilizando la función write o una función similar para escribir
en el archivo especificado. La implementación típica de ft_putnbr_fd implica
convertir el número entero n en una cadena de caracteres utilizando alguna
técnica de conversión de enteros a cadenas, como la división sucesiva y la
construcción inversa de la cadena. Una vez que se tiene la cadena de
caracteres que representa el número, se utiliza la función write o similar
para escribir la cadena en el descriptor de archivo fd,
seguida de un carácter de nueva línea ('\n').
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	char_conv_mod;

	if (n < 0)
	{
		write(fd, "-", 1);
		char_conv_mod = -(n % 10) + '0';
	}
	if (n < -9)
		ft_putnbr_fd(-(n / 10), fd);
	if (n == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	if (n > 0)
		char_conv_mod = n % 10 + '0';
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	write(fd, &char_conv_mod, 1);
}
/*
#include <fcntl.h>
int main(void)
{
	int numero;
	int file_descriptor;

	file_descriptor = open("libro_pizza", O_RDWR);
	numero = 10;
	ft_putnbr_fd(numero,file_descriptor);
}*/
