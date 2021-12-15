/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:57:45 by atouhami          #+#    #+#             */
/*   Updated: 2021/11/07 18:20:12 by atouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*pdest;
	char	*psrc;

	i = 0;
	if (!src && !dest)
		return (NULL);
	pdest = (char *)dest;
	psrc = (char *)src;
	while (n)
	{
		pdest[i] = psrc[i];
		i++;
		n--;
	}
	return (dest);
}
