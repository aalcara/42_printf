/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadecimal copy.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 20:51:59 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/25 14:16:26 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>//

// static char		*ptr_hex(char *hexa_str, t_flags flags)
// {
// 	int			length;
// 	int			pre_str_len;
// 	char		*pre_str;
// 	char		*full_ptr_str;
// 	char		*full_str;

// 	// printf("\nl:24\tprecision = %d\n", flags.precision);//
// 	length = ft_strlen(hexa_str) + 2;
// 	// printf("\nl:26\tlength = %d\n", length);//
// 	if (flags.precision <= length)
// 		return (ft_strjoin("0x", hexa_str));
// 	pre_str_len = flags.precision - length + 2;
// 	// printf("l:30\tpre_str_len = %d\n", pre_str_len);//
// 	if(!(pre_str = ft_calloc(sizeof(char) , (pre_str_len + 1))))
// 		return (NULL);
// 	ft_memset(pre_str, '0', pre_str_len);
// 	full_str = ft_strjoin(pre_str, hexa_str);
// 	free(pre_str);
// 	free(hexa_str);
// 	full_ptr_str = ft_strjoin("0x", full_str);
// 	return (full_ptr_str);
// }

// static char		*precision_hex(char *hexa_str, t_flags flags)
// {
// 	int			length;
// 	int			pre_str_len;
// 	char		*pre_str;
// 	char		*full_str;
// 	// char		*full_freed_str;

// 	length = ft_strlen(hexa_str);
// 	// printf("\nl:43\tprecision = %d\n", flags.precision);//
// 	if (flags.precision <= length)
// 		return (hexa_str);
// 	pre_str_len = flags.precision - length;
// 	if(!(pre_str = ft_calloc(sizeof(char) , (pre_str_len + 1))))
// 		return (NULL);
// 	ft_memset((char *)pre_str, '0', pre_str_len);
// 	full_str = ft_strjoin(pre_str, hexa_str);
// 	// free(pre_str);
// 	return (full_str);
// 	// full_freed_str = ft_free(full_str, ft_strlen(full_str));
// 	// return (full_freed_str);
// }

// static char		*itoa_hex(unsigned long int nbr, t_flags flags)
// {
// 	int			num_len;
// 	int			aux_num;
// 	char		*hexa_str;
// 	char		*hexa_ret;
// 	// char		*freed_hexa_str;//!

// 	num_len = ft_hexa_len(nbr);
// 	if (!(hexa_str = ft_calloc(sizeof(char), (num_len + 1))))
// 		return (NULL);
// 	if (nbr == 0)
// 	 	ft_memset((char *)hexa_str, '0', 1);
// 	while (nbr > 0)
// 	{
// 		if ((aux_num = nbr % 16) < 10)
// 			hexa_str[num_len - 1] = aux_num + '0';
// 		else
// 		{
// 			if (flags.specifier == 'X')
// 				hexa_str[num_len - 1] = aux_num + 55;
// 			else
// 				hexa_str[num_len - 1] = aux_num + 87;
// 		}
// 		nbr = nbr / 16;
// 		num_len--;
// 	}
// 	// freed_hexa_str = ft_free(hexa_str, ft_strlen(hexa_str));
// 	// printf("\nl:92\tfreed_hexa_str = %s\n", freed_hexa_str);
// 	if (flags.specifier == 'p')
// 		hexa_ret = ptr_hex(hexa_str, flags);
// 	else
// 		hexa_ret = precision_hex(hexa_str, flags);
// 	// free(hexa_str);
// 	return (hexa_ret);
// }

// int				printf_hexadecimal(t_flags flags, va_list args)
// {
// 	int			length;
// 	long int	number;
// 	char		*number_str;
// 	char 		padded;

// 	number = va_arg(args, unsigned long int);
// 	// printf("\nl:97\tEntrou printf_positive");//
// 	if (flags.zero_padded == 1 && flags.true_precision == 0)
// 		padded = '0';
// 	else
// 		padded = ' ';
// 	if (flags.true_precision == 1 && flags.precision == 0)
// 		number_str = "\0";
// 	else
// 		number_str = itoa_hex(number, flags);//!!!!!!!!!!
// 	length = ft_strlen(number_str);
// 	if (flags.left_aligned == 1)
// 		ft_putstr(number_str);
// 	while (length < flags.min_width)
// 	{
// 		ft_putchar(padded);
// 		length++;
// 	}
// 	if (flags.left_aligned == 0)
// 		ft_putstr(number_str);
// 	// free(number_str);
// 	return (length);
// }