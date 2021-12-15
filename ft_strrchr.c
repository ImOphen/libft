/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:18:24 by atouhami          #+#    #+#             */
/*   Updated: 2021/11/04 12:17:49 by atouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	while (i > -1)
	{
		if (string[i] == (char)searchedChar)
			return (&string[i]);
		i--;
	}
	return (NULL);
}
