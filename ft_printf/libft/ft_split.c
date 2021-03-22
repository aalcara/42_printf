/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/08 17:20:49 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**put_words(char const *s, char c, int n_words)
{
	unsigned int		i[3];
	char				**array;

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	array = ((char **)ft_calloc((n_words + 1), sizeof(char *)));
	if (array == NULL)
		return (NULL);
	while (s[i[0]] != '\0')
	{
		if (s[i[0]] == c)
		{
			if (i[0] > i[1])
			{
				array[i[2]] = ft_substr(s, i[1], (i[0] - i[1]));
				i[2]++;
			}
			i[1] = i[0] + 1;
		}
		i[0] = i[0] + 1;
	}
	if (i[0] > i[1])
		array[i[2]] = ft_substr(s, i[1], (i[0] - i[1]));
	return (array);
}

char			**ft_split(char const *s, char c)
{
	int			n_words;
	int			i;

	if (!s || !c)
		return (NULL);
	i = 0;
	n_words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			n_words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (put_words(s, c, n_words));
}
