/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:12:22 by joleblan          #+#    #+#             */
/*   Updated: 2019/04/30 11:12:24 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_strlen.c"

char *ft_strdup(const char *s)
{
	char *new_string;
	int length;

	length = strlen(s);
	new_string = (char*)malloc(sizeof(char) * (length + 1));
	new_string[length] = '\0';
	return new_string;
}
