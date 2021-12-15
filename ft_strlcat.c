/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:19:08 by atouhami          #+#    #+#             */
/*   Updated: 2021/11/06 14:45:12 by atouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ldest;
	size_t	lsrc;
	size_t	c;

	i = 0;
	ldest = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (dstsize == 0 || dstsize - 1 < ldest)
		return (lsrc + dstsize);
	i = ldest;
	c = 0;
	while (src[c] && i < dstsize - 1)
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (ldest + lsrc);
}
