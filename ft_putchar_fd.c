/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:59:41 by psapio            #+#    #+#             */
/*   Updated: 2023/11/18 18:59:39 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_putchar_fd imprime un solo carácter en el descriptor de archivo
especificado por fd. El carácter a imprimir se especifica mediante el
parámetro c, que debe ser de tipo char. Esta función es útil para imprimir
un único carácter en un descriptor de archivo específico, que puede ser
utilizado para redirigir la salida a diferentes destinos,
como archivos o dispositivos. La implementación típica de ft_putchar_fd
puede variar dependiendo del sistema operativo y el entorno en el que se
esté utilizando. En sistemas Unix-like, como Linux o macOS, se puede utilizar
la función de sistema write para escribir el carácter en el descriptor de
archivo especificado por fd.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int main(void)
{
	char caracter;
	int nombre_archivo;

	caracter = 'C';
	nombre_archivo = open("texto_sagro_de_paolo", O_RDWR);
	ft_putchar_fd(caracter, nombre_archivo);
	close(nombre_archivo);
}*/
