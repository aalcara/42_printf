/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 18:32:50 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 18:42:50 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_hexa_atoi(unsigned long int nbr, int numlen, t_flags flags)
{
	char		*hexa_str;
	int			aux_num;
	int			start_num_len;

	start_num_len = numlen;
	if (!(hexa_str = ft_calloc(sizeof(char), (numlen + 1))))
		return (NULL);
	if (nbr == 0)
		ft_memset((char *)hexa_str, '0', 1);
	while (nbr > 0)
	{
		if ((aux_num = nbr % 16) < 10)
			hexa_str[numlen - 1] = aux_num + '0';
		else
			hexa_str[numlen - 1] = aux_num + flags.specifier - 33;
		nbr = nbr / 16;
		numlen--;
	}
	hexa_str[start_num_len] = '\0';
	return (hexa_str);
}
