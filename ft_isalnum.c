/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:53:57 by atouhami          #+#    #+#             */
/*   Updated: 2021/11/04 10:21:57 by atouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if (((character >= 'a' && character <= 'z')
			|| (character >= 'A' && character <= 'Z'))
		|| (character >= '0' && character <= '9'))
		return (1);
	return (0);
}
