/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>         +#+   +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 21:37:10 by tvisenti          #+#    #+#             */
/*   Updated: 2016/03/27 22:07:25 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	*ft_itoa_base(int value, int base)
{
	char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int converted_number[64];
	int i = 0;
	int n;
	char *result;

	n = value;
	if (value < 0)
		value = value * -1;
	while (value != 0)
	{
		converted_number[i] = value % base;
		value = value / base;
		++i;
	}
	--i;
	result = malloc(i * sizeof(char));
	if (n < 0)
	{
		result[0] = '-';
		n = 1;
	}
	while (i >= 0)
	{
		result[n] = base_digits[converted_number[i]];
		i--;
		n++;
	}
	return (result);
}
