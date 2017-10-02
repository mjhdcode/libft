/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhouser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 11:59:54 by mhouser           #+#    #+#             */
/*   Updated: 2017/09/29 12:00:00 by mhouser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printnum(int val, int length)
{
	int i;
	int output[length];
	int value;

	i = length;
	if (val <= 0)
		ft_putchar((val == 0) ? '0' : '-');
	value = (val < 0) ? (val * -1) : val;
	while ((output[--length] = value % 10) || value)
		value = (value - (value % 10)) / 10;
	while (i--)
		ft_putchar((output[++length] + '0'));
	ft_putchar('\n');
}

void	ft_putnbr(int val)
{
	int value;
	int length;

	value = (val) ? val : (val * -1);
	length = 0;
	while (value && ++length)
		value = (value - (value % 10)) / 10;
	ft_printnum(val, length);
}