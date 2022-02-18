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
	char	*ptr;
	char	*ptr2;
	char	*result;

	result = ft_memalloc((size_t)ft_strlen((char *)s) + 1);
	if (!(result))
		return (NULL);
	ptr = (char *)s;
	ptr2 = result;
	while (*ptr)
		*(ptr2++) = f(*(ptr++));
	return (result);
}
