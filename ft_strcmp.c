/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 09:56:43 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/01 17:13:24 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

int ft_strcmp(const char *s1, const char *s2)
{
	char *re_s1;
	char *re_s2;

	re_s1 = (char*)s1;
	re_s2 = (char*)s2;
	while (*re_s1 && *re_s2 && *re_s1 == *re_s2)
	{
		re_s1++;
		re_s2++;	
	}
	if (*re_s1 > *re_s2)
		return 1;
	else if (*re_s1 < *re_s2)
		return -1;
	else
		return 0;
}
