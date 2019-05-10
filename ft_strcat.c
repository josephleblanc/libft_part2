/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:59:44 by joleblan          #+#    #+#             */
/*   Updated: 2019/04/30 11:01:19 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, const char *src)
{
	int dest_end;

	dest_end = 0;
	while (dest[dest_end])
		dest_end++;

	while (*src)
	{
		dest[dest_end++] = *src;
		src++;
	}
	dest[dest_end] = *src;
	return dest;
}
