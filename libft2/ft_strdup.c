/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetters <kpetters@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:12:50 by kpetters          #+#    #+#             */
/*   Updated: 2022/02/07 15:02:48 by kpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;
	int		c;

	c = 0;
	len = ft_strlen(src);
	cpy = (char *)malloc(sizeof(len + 1));
	while (src[c] != '\0')
	{
		cpy[c] = src[c];
		c++;
	}
	cpy[c] = '\0';
	return (cpy);
}
