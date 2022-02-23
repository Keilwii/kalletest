/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetters <kpetters@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:32:43 by kpetters          #+#    #+#             */
/*   Updated: 2022/02/21 12:30:30 by kpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*final_str;

	i = 0;
	if (!s)
		return (NULL);
	final_str = (char *)malloc(((char)len) + 1);
	if (final_str == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		final_str[i] = s[start];
		i++;
		start++;
	}
	final_str[i] = '\0';
	return (final_str);
}
