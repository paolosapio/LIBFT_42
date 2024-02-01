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
