/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:16:26 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 13:05:59 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_pre_str(char *str_num, t_flags flags, int neg_signal)
{
	int			length;
	char		*pre_str;
	int			pre_str_len;

	length = ft_strlen(str_num);
	pre_str_len = flags.precision + neg_signal - length;
	if ((flags.precision + neg_signal) <= length)
		if (neg_signal == 0)
			pre_str = ft_calloc(2, sizeof(char));
		else
			pre_str = ft_calloc(2, sizeof(char));
	else
	{
		(pre_str = ft_calloc(sizeof(char) , (pre_str_len + 1)));
		ft_memset((char *)pre_str, '0', pre_str_len);
	}
	if (!pre_str)
		return (NULL);
	if (neg_signal == 1)
		pre_str[0] = '-';
	return (pre_str);
}
