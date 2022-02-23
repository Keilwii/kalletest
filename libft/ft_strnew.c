/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetters <kpetters@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:26:45 by kpetters          #+#    #+#             */
/*   Updated: 2022/02/18 13:55:23 by kpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*string;

	string = ft_memalloc(size + 1);
	if (!(string))
		return (NULL);
	i = 0;
	while (i < size)
		string[i++] = '\0';
	return (string);
}
