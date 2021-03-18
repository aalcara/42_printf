/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 20:25:14 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/18 20:40:39 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				printf_str(t_flags flags, va_list args)
{
	char	*str;
	int		len;

	str = va_arg(args, char*);
	len = ft_strlen(str);
	// printf("\nl:25\tlen = %d", len);//
	if (flags.left_aligned == 1)
		ft_putstr(str);
	while (len < flags.min_width)
	{
		ft_putchar(' ');
		len++;
	}
	if (flags.left_aligned == 0)
		ft_putstr(str);
	return (len);
}
