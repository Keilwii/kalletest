/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetters <kpetters@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:33:56 by kpetters          #+#    #+#             */
/*   Updated: 2022/02/18 13:55:31 by kpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	unsigned int	i;
	int				words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * n + 1);
	if (result == NULL)
		return (NULL);
	result = ft_strncpy(result, s, n);
	result[n] = '\0';
	return (result);
}

static char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**array;

	i = 0;
	k = 0;
	array = (char **)malloc(sizeof(char *) * (count_words(s, c)) + 1);
	if (array == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			array[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	array[k] = NULL;
	return (array);
}

char	**ft_strsplit(char const *s, char c)
{
	if (!s || !c)
		return (NULL);
	return (ft_split(s, c));
}
