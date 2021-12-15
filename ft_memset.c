/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:23:26 by atouhami          #+#    #+#             */
/*   Updated: 2021/11/04 10:24:44 by atouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*psource;

	i = 0;
	psource = (char *)s;
	while (n)
	{
		psource[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}
