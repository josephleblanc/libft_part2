/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:00:47 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/01 17:29:16 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	int dest_length;
	int src_pos;
	int dest_pos;
	int resize;

	resize = size;
	dest_length = 0;
	while (dest[dest_length])
		dest_length++;
	src_pos = 0;
	dest_pos = dest_length;
	while (src_pos <= resize - dest_length - 1 && src[src_pos])
		dest[dest_pos++] = src[src_pos++];
	dest[dest_pos] = '\0';
	return src_pos + dest_length + 1;
}

