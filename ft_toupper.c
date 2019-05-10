/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:03:05 by joleblan          #+#    #+#             */
/*   Updated: 2019/04/30 11:03:18 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int to_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return c;
}