/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:57:08 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/01 17:07:19 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;

	if (!haystack || !*haystack)
		return NULL;
	if (!*needle)
		return (char*)haystack;
	while (*haystack)
	{
		i = 0;
		while (needle[i] && haystack[i] == needle[i])
		{
			i++;
			if (!(needle[i]))
				return (char*)haystack;
		}
		haystack++;
	}
	return NULL;
}
