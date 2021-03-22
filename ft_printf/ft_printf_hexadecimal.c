/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 20:51:59 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/22 01:54:47 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		hexa_lenght(unsigned long int number)
{
	int 		num_len;

	num_len = 0;
	while (number > 0)
	{
		number = number / 16;
		num_len++;
	}
	return (num_len);
}

static char		*itoa_hex(unsigned long int nbr, t_flags flags, int specifier)
{
	int			num_len;
	int			aux_num;
	char		*hexa_str;
	char		*hexa_precision_str;

	num_len = hexa_lenght(nbr);
	hexa_str = ft_calloc((num_len + 1), sizeof(char));
	if (nbr == 0)
		return ("0");
	while (nbr > 0)
	{
		if ((aux_num = nbr % 16) < 10)
			hexa_str[num_len - 1] = aux_num + '0';
		else
			hexa_str[num_len - 1] = aux_num + specifier - 33;
		nbr = nbr / 16;
		num_len--;
	}


}

int				printf_hexadecimal(t_flags flags, va_list args, int specifier)
{
	int			length;
	long int	number;
	char		*number_str;
	char 		padded;

	number = va_arg(args, unsigned long int);
	// printf("\nl:97\tEntrou printf_positive");//
	if (flags.zero_padded == 1)
		padded = '0';
	else
		padded = ' ';
	number_str = itoa_hex(number, flags, specifier);//!!!!!!!!!!
	length = ft_strlen(number_str);
	if (flags.left_aligned == 1)
		ft_putstr(number_str);
	while (length < flags.min_width)
	{
		ft_putchar(padded);
		length++;
	}
	if (flags.left_aligned == 0)
		ft_putstr(number_str);
	return (length);
}
