/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:14:54 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/02 17:25:23 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	int end;
	int final;

	i = 0;
	while (i + 1 < n && src[i])
		i++;
	end = -1;
	while (dest[++end]);
	final = end + i;
	while (end < final)
	{
		dest[end++] = *src;
		src++;
	}
	dest[final + 1] = '\0';
	return dest;
}
