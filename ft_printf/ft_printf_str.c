/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 20:25:14 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 13:05:14 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static char		*get_str(t_flags flags, char *aux_str)
{
	char		str[flags.precision];
	int				i;
	static char		*str_ret;

	i = 0;
	while (i < flags.precision)
	{
		str[i] = aux_str[i];
		i++;
	}
	str[i] = '\0';
	str_ret = str;
	return (str_ret);
}

static char		*precision_str(t_flags flags, va_list args)
{
	char		*str;
	char		*aux_str;
	int			aux_len;
	char		*str_arg;

	if (!(str_arg = va_arg(args, char*)))
		aux_str = "(null)";
	else
		aux_str = str_arg;
	aux_len = ft_strlen(aux_str);
	if (flags.true_precision == 1 && flags.precision == 0)
		return ("\0");
	if (flags.true_precision == 1 && flags.precision < aux_len)
		str = get_str(flags, aux_str);
	else
		str = aux_str;
	return (str);
}

int				printf_str(t_flags flags, va_list args)
{
	char	*str;
	int		len;

	if (flags.zero_padded == 1 && flags.left_aligned == 0)
		flags.padded = '0';
	str = precision_str(flags, args);
	len = ft_strlen(str);
	if (flags.left_aligned == 1)
		ft_putstr(str);
	while (len < flags.min_width)
	{
		ft_putchar(flags.padded);
		len++;
	}
	if (flags.left_aligned == 0)
		ft_putstr(str);

	return (len);
}
