/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/13 18:04:53 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
		{
			return (char *)(s + i);
		}
		i++;
	}
	if (*(s + i) == (char)c)
	{
		return (char *)(s + i);
	}
	return (NULL);
}
