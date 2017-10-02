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

void	*ft_memmove(void *dst, void *src, size_t size)
{
	unsigned char	*rd_pnt;
	unsigned char	*wrt_pnt;
	int				i;

	rd_pnt = src;
	wrt_pnt = dst;
	if (dst == src)
		return (dst);
	i = (src > dst) ? 0 : size;
	while (src > dst && i++ < (int)size)
		wrt_pnt[i - 1] = (unsigned int)rd_pnt[i - 1];
	while (src < dst && i-- > 0)
		wrt_pnt[i] = (unsigned int)rd_pnt[i];
	return (dst);
}