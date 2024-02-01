/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:12:06 by psapio            #+#    #+#             */
/*   Updated: 2023/11/18 19:51:04 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_putendl_fd imprime la cadena de caracteres s seguida de
un salto de línea en el descriptor de archivo especificado por fd.
La cadena s debe ser una cadena de caracteres terminada por un carácter
nulo ('\0'). Esta función es útil cuando se necesita imprimir una línea
de texto completa en un descriptor de archivo específico, como redirigir
la salida a diferentes destinos, incluyendo archivos o dispositivos.
La implementación típica de ft_putendl_fd puede variar dependiendo del
sistema operativo y el entorno en el que se esté utilizando.
En sistemas Unix-like, como Linux o macOS, se puede utilizar la función de
sistema write para escribir la cadena de caracteres s seguida del carácter
de nueva línea ('\n') en el descriptor de archivo fd.
*/
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	//char frase [] = "Viva la vida";
	//int file_d;

	//file_d = open("archivo_pc", O_RDWR);
	//ft_putendl_fd(frase, file_d);
	//close(file_d);
	
	ft_putendl_fd("Hola buenos dias", 1);
}*/
