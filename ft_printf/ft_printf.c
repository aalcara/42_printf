/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:28:53 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/18 20:43:08 by aalcara-         ###   ########.fr       */
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

int				recursive_printf(const char *str, va_list args, int lenght)
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
	return (lenght);
}

int				ft_printf(const char *str, ...)
{
	va_list			args;
	int				lenght;

	va_start(args, str);
	lenght = recursive_printf(str, args, 0);
	va_end(args);
	return (lenght);
}
