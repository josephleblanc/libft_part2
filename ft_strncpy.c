/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:02:23 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/02 17:26:47 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

char *ft_strncpy(char* dest, const char* src, size_t n)
{
	size_t i;

	i = -1;
	while (src[++i] && i < n)
		dest[i] = src[i];
	while (i < n)
		dest[i] = '\0';
	return dest;
}
