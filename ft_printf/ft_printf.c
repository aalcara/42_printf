/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:28:53 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/17 14:32:47 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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

	if (!(percent_sign = ft_strchr(str, '%')))
	{
		ft_putstr(str);
		return (lenght + ft_strlen(str));
	}
	lenght += putstr_before_percent(str);
	// printf("\nl:38\trecursivePrintf test");//
	lenght += select_flags(&percent_sign, args);
	// printf("\nl:41\tpercent_sign = %s", percent_sign);//
	lenght = recursive_printf(percent_sign, args, lenght);
	//todo call recursive printf, starting at first char after specifier
	return (lenght);
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
