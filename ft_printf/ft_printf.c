/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:28:53 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 11:53:27 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> //!excluir

int				putstr_before_percent(const char *str)
{
	int			i;

	i = 0;
	// printf("\nl:21\tentrou putstr_before_percent");//
	while (str[i] != '%')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int				recursive_printf(const char *str, va_list args, int length)
{
	char		*percent_sign;

	if (!(percent_sign = ft_strchr(str, '%')))
	{
		ft_putstr(str);
		return (length + ft_strlen(str));
	}
	length += putstr_before_percent(str);
	printf("\nl:40\tlength = %d\n", length);//
	length += select_flags(&percent_sign, args);
	printf("\nl:42\tlength = %d\n", length);//
	printf("\nl:43\tpercent_sign = %s\n", percent_sign);//
	length = recursive_printf(percent_sign, args, length);
	return (length);
}

int				ft_printf(const char *str, ...)
{
	va_list			args;
	int				length;

	va_start(args, str);
	length = recursive_printf(str, args, 0);
	va_end(args);
	return (length);
}
