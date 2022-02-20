/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetters <kpetters@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:30:45 by kpetters          #+#    #+#             */
/*   Updated: 2022/02/18 13:55:07 by kpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*final_str;

	if (s == NULL)
		return (NULL);
	i = 0;
	final_str = (char *)malloc((char)(ft_strlen(s) + 1));
	if (final_str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		final_str[i] = f(s[i]);
		i++;
	}
	final_str[i] = '\0';
	return (final_str);
}

