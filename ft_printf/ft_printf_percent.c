/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 22:13:27 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 13:05:21 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				printf_percent_sign(t_flags flags)
{
	char		c;
	int			i;

	if (flags.zero_padded == 1 && flags.left_aligned == 0)
		flags.padded = '0';
	i = 0;
	c = '%';
	if (flags.left_aligned == 1)
		ft_putchar(c);
	while (i < flags.min_width - 1)
	{
		ft_putchar(flags.padded);
		i++;
	}
	if (flags.left_aligned == 0)
		ft_putchar(c);
	return (i + 1);
}
