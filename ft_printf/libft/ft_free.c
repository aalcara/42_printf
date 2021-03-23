/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 17:04:19 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/23 17:04:55 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_free(char *str, int len)
{
	char			str_aux[len + 1];
	static char		*str_ret;
	int				i;

	i = 0;
	while (i < len)
	{
		str_aux[i] = str[i];
		i++;
	}
	str_aux[len] = '\0';
	str_ret = str_aux;
	free(str);
	return (str_ret);
}
