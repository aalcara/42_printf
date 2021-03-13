/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/08 17:14:18 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s1, char const *set)
{
	size_t			k;
	size_t			new_len;
	size_t			new_start;

	if (!s1 || set == NULL)
		return (NULL);
	k = ft_strlen(s1) - 1;
	new_start = 0;
	while (s1[new_start] && ft_strchr(set, s1[new_start]))
		new_start++;
	if (new_start == k + 1)
		return ("");
	while (k && ft_strchr(set, s1[k]))
		k--;
	new_len = (k + 1) - new_start;
	return (ft_substr(s1, new_start, new_len));
}
