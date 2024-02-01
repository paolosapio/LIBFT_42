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
