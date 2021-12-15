/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:14:33 by atouhami          #+#    #+#             */
/*   Updated: 2021/11/05 16:23:48 by atouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	int		i;
	int		c;
	char	str2[12];

	i = ft_strlen(str) - 1;
	c = 0;
	while (i >= 0)
		str2[c++] = str[i--];
	i = 0;
	ft_memcpy(str, str2, ft_strlen(str));
	return (str);
}

static int	get_lenght_of_int(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i + 1);
}

static void	fill_string(char *str, int n)
{
	int	i;
	int	sign;

	i = 0;
	sign = n;
	if (n < 0)
		n = -n;
	while (n)
	{
		str[i] = (n % 10) + 48;
		i++;
		n /= 10;
	}
	if (sign < 0)
		str[i++] = '-';
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(get_lenght_of_int(n) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	fill_string(str, n);
	str = ft_strrev(str);
	return (str);
}
