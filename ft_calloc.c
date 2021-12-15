/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:05:28 by atouhami          #+#    #+#             */
/*   Updated: 2021/11/04 11:13:00 by atouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	int		total;
	char	*p;

	total = elementSize * elementCount;
	p = (char *)malloc(total);
	if (p == NULL)
		return (0);
	while (total - 1 > -1)
	{
		p[total - 1] = 0;
		total--;
	}
	return (p);
}
