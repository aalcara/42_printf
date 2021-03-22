/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:02:57 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/20 21:04:24 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s)
{
	char			*p;
	unsigned long	i;
	unsigned long	len;

	i = 0;
	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < len)
	{
		*(p + i) = *(s + i);
		i++;
	}
	p[i] = '\0';
	return (p);
}
