/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/23 16:56:50 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		length(long int n)
{
	long int		len;

	len = 0;
	if (n == 0)
	{
		len = 1;
	}
	if (n < 0)
	{
		len++;
		n = n * (-1);
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static int		divisor(long int n)
{
	long int	div;

	div = 1;
	if (n < 0)
		n = n * (-1);
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		div = div * 10;
	}
	return (div / 10);
}

char			*whyyy(long int new_n, char *result, long int len, long int div)
{
	int			i;

	i = 0;
	if (new_n < 0)
	{
		new_n = (new_n * (-1));
		result[i] = '-';
		i++;
	}
	while (i < len)
	{
		result[i] = ((new_n / (div)) + '0');
		new_n = new_n % div;
		div = div / 10;
		i++;
	}
	return (result);
}

char			*ft_itoa(long int n)
{
	char			*result;
	long int		len;
	long int		div;
	long int		new_n;

	new_n = n;
	len = length(new_n);
	div = divisor(new_n);
	result = ft_calloc((len + 1), sizeof(char));
	if (result == NULL)
		return (NULL);
	return (whyyy(new_n, result, len, div));
}
