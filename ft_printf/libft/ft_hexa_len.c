/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:05:58 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/23 21:03:47 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_hexa_len(unsigned long int number)
{
	int 		num_len;

	if (number == 0)
		return (0);
	num_len = 0;
	while (number > 0)
	{
		number = number / 16;
		num_len++;
	}
	return (num_len);
}
