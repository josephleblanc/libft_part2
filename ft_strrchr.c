/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 18:05:21 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/01 18:15:54 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"

char *ft_strrchr(const char *s, int c)
{
	int len;
	char *p;

	len = ft_strlen(s);
	p = (char*)s;
	while (--len >= 0)
	{
		if (*p-- == c)
			return p;
	}
	return (p + ft_strlen(s));
}
