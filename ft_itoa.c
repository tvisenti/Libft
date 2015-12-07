/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:13:31 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/05 13:05:39 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static long	ft_divint(int n)
{
	int		i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_neg_itoa(long n)
{
	if (n < 0)
		return (1);
	return (0);
}

static char	*ft_retitoa(int n, int len, char *str, long nb)
{
	if (n < 0)
	{
		nb = -n;
		str[0] = '-';
		while (nb > 9)
		{
			str[len--] = (nb % 10) + '0';
			nb = nb / 10;
		}
	}
	else
	{
		len--;
		while (nb > 9)
		{
			str[len--] = (nb % 10) + '0';
			nb = nb / 10;
		}
	}
	if (nb < 10)
		str[len] = nb + '0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;
	int		neg;

	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	nb = (long)n;
	neg = 0;
	len = ft_divint(n);
	if (ft_neg_itoa(n) == 1)
		neg = 1;
	str = ft_strnew(len);
	return (ft_retitoa(n, len, str, nb));
}
