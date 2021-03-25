/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 20:51:59 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/25 18:45:14 by aalcara-         ###   ########.fr       */
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
// 	if (flags.true_precision == 1 && flags.precision == 0)
// 		return ("\0");
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

static int		get_left_align(int prenum_len, t_flags flags)
{
	int			total_len;

	// printf("\nl:107\tGET_LEFT_ALIGN\n");//
	total_len = prenum_len;
	if (flags.left_aligned == 1)
		return (total_len);

	while (total_len < flags.min_width)
	{
		ft_putchar(flags.padded);
		total_len++;
	}
	return (total_len);
}

static int		get_precision(int num_len, t_flags flags)
{
	int			prenum_len;
	int			total_len;

	// printf("\nl:124\tGET_PRECISION\n");//

	prenum_len = num_len;
	if (flags.precision > num_len)
		prenum_len = flags.precision;
	if (flags.pointer == 1)
		prenum_len += 2;

	total_len = get_left_align(prenum_len, flags);

	// printf("\nl:134\treturn GET_PRECISION\n");//
	if (flags.pointer == 1)
		ft_putstr("0x");
	while (num_len < flags.precision)
	{
		ft_putchar('0');
		num_len++;
	}


	return (total_len);
}

static int		get_hexa_num(unsigned long int nbr, t_flags flags)
{
	char		*hexa_str;
	int			num_len;
	int			aux_num;
	int			total_len;
	int			start_num_len;

	// printf("\nl:150\tGET_HEXA_NUM\n");//
	num_len = 0;
	if (flags.true_precision != 1 || flags.precision != 0 || nbr != 0)
		num_len = ft_hexa_len(nbr);
	// printf("l:156\tnbr = %x\n", nbr);//
	// printf("l:157\tnum_len = %d\n", num_len);//
	start_num_len = num_len;
	if (!(hexa_str = ft_calloc(sizeof(char), (num_len + 1))))
		return (-1);
	if (nbr == 0)
	 	ft_memset((char *)hexa_str, '0', 1);
	while (nbr > 0)
	{
		if ((aux_num = nbr % 16) < 10)
			hexa_str[num_len - 1] = aux_num + '0';
		else
			hexa_str[num_len - 1] = aux_num + flags.specifier - 33;
		nbr = nbr / 16;
		num_len--;
	}
	hexa_str[start_num_len] = '\0';
	total_len = get_precision(start_num_len, flags);
	// printf("\nl:165\thexa_str = %s\n", hexa_str);
	ft_putstr(hexa_str);
	free(hexa_str);
	return (total_len);
}

int				printf_hexadecimal(t_flags flags, va_list args)
{
	int			total_len;
	unsigned long int	number;

	number = va_arg(args, unsigned long int);
	if (flags.true_precision == 1)
		flags.zero_padded = 0;
	if (flags.zero_padded == 1 && flags.left_aligned == 0)
		flags.padded = '0';

	total_len = get_hexa_num(number, flags);

	while (total_len < flags.min_width)
	{
		ft_putchar(flags.padded);
		total_len++;
	}

	return (total_len);
}
