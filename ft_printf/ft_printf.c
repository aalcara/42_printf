/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:28:53 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/15 19:23:19 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			putstr_before_percent(const char *str)
{
	int			i;

	while (str[i] != '%')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int			recursive_printf(const char *str, va_list args, int lenght)
{
	char		*percent_sign;
	char		*aux_str;

	if (!(percent_sign = ft_strchr(str, '%')))
	{
		ft_putstr(str);
		return (lenght + ft_strlen(str));
	}
	lenght += putstr_before_percent(str);
	lenght += select_specifier(&percent_sign, args);
	//todo call recursive printf, starting at first char after specifier
	return 0;
}


int			ft_printf(const char *str, ...)
{
	va_list			args;
	int				lenght;

	va_start(args, str);
	lenght = recursive_printf(str, args, 0);
	va_end(args);
	return (lenght);
}
