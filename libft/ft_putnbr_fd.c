/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:20:32 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/20 17:57:39 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	divisor(unsigned int num)
{
	unsigned int	div;

	div = 1;
	while (num / div >= 10)
	{
		div = div * 10;
	}
	return (div);
}

void				ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	unsigned int	div;
	int				temp;

	if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			num = n * (-1);
		}
		else
			num = n;
		div = divisor(num);
		while (div >= 1)
		{
			temp = (num / div) + '0';
			write(fd, &temp, 1);
			num = num % div;
			div = div / 10;
		}
	}
}
