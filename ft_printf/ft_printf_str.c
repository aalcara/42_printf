/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 20:25:14 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/22 16:15:53 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static char		*precision_str(t_flags flags, va_list args)
{
	char		*str;
	char		*aux_str;
	int			aux_len;
	int			i;
	// char		*result_str;

	aux_str = va_arg(args, char*);
	aux_len = ft_strlen(aux_str);
	if (flags.true_precision == 1 && flags.precision == 0)
		return ("\0");
	if (flags.true_precision == 1 && flags.precision < aux_len)
	{
		// str = ft_substr(aux_str, 0, flags.precision);
		// result_str = str;
		// free(str);
		// return (str);
		str = ft_calloc((flags.precision), sizeof(char));
		i = 0;
		while (i < flags.precision)
		{
			str[i] = aux_str[i];
			i++;
		}
	}
	else
		str = aux_str;
	return (str);
}

int				printf_str(t_flags flags, va_list args)
{
	char	*str;
	int		len;
	// printf("\nl:20\tprintf_str");//
	// printf("\nl:22\tprecision = %d", flags.precision);//
	str = precision_str(flags, args);
	len = ft_strlen(str);
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
