/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 19:27:29 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 18:25:26 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				printf_char(t_flags flags, va_list args)
{
	char		c;
	int			i;

	i = 0;
	c = va_arg(args, int);
	if (flags.left_aligned == 1)
		ft_putchar(c);
	while (i < flags.min_width - 1)
	{
		ft_putchar(' ');
		i++;
	}
	if (flags.left_aligned == 0)
		ft_putchar(c);
	return (i + 1);
}
