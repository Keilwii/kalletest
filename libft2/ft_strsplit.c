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

char	**ft_strsplit(char const *s, char c)
{
	char	*charset;

	if (!s || !c)
		return (NULL);
	charset = ft_strnew(2);
	if (!(charset))
		return (NULL);
	charset[0] = c;
	return (ft_strsplitchrset((char *)s, charset));
}
