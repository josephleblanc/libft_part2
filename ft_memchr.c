/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 07:29:41 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/01 08:05:31 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	char *chr;

	chr = (char*)s;
	while (*chr != c && --n+1 > 0)
		chr++;
	if (*chr == c)
		return chr;
	else
		return NULL;
}
