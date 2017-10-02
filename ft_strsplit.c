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

char	**ft_strspliter(char const *s, char c, int strlen, int subcount)
{
	int		i;
	char	**list;

	list = ft_memalloc(sizeof(char **) * (subcount + 1));
	list[subcount] = (char *)('\0');
	while (subcount--)
	{
		while (*(s - 1) == c)
			s--;
		i = 0;
		while (strlen-- && *(--s) != c)
			i++;
		strlen++;
		list[subcount] = ft_strnew(i);
		i = 0;
	}
	return (list);
}

char	**ft_strsplit(char const *s, char c)
{
	int		subcount;
	int		strlen;
	int		bigstrlen;
	char	**rtnpnt;

	bigstrlen = 0;
	subcount = 0;
	strlen = 0;
	while (*s == c)
		s++;
	while (*s && ++strlen && ++bigstrlen)
	{
		subcount += (!(*s) || *(++s) == c) ? 1 : 0;
		while (*s == c && bigstrlen++)
			s++;
	}
	subcount += (!*s && strlen && *(s - 1) != c) ? 1 : 0;
	rtnpnt = ft_strspliter(s, c, strlen, subcount);
	s -= bigstrlen;
	while (*rtnpnt)
	{
		strlen = 0;
		while (*s != c && *s)
			rtnpnt[0][strlen++] = *s++;
		while (*s == c)
			s++;
		rtnpnt++;
	}
	return (rtnpnt -= subcount);
}