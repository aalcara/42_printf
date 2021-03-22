/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_no_malloc.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:05:58 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/22 17:33:35 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char			*ft_stjoin_mllc(char *s1, char *s2, int lens1, int lens2)
{
	char		aux_str[lens1 + lens2 + 1];
	char		*result;
	int			i;
	int			total_len;

	i = 0;
	total_len = lens1 + lens2;
	while (i < lens1)
	{
		aux_str[i] = s1[i];
		i++;
	}
	while (i < lens1 + lens2)
	{
		aux_str[i] = s2[i - lens1];
		i++;
	}
	aux_str[lens1 + lens2] = '\0';
	result = aux_str;
	return (result);
}
