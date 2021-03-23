/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:05:58 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/23 16:23:15 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_num_len(long int number)
{
	int 		num_len;

	num_len = 0;
	if (number < 0)
		num_len++;
	while (number != 0)
	{
		number = number / 10;
		num_len++;
	}
	return (num_len);
}
