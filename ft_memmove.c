/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 17:08:33 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/08 18:17:37 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest && src + n > dest)
	{
	 	while (n > 0)
		{
			n--;
			((char*)dest)[n] = ((char*)src)[n];
		}
		return (dest + n);
	}
	return (ft_memcpy(dest, src, n));
}

//int	main(void)
//{
//	char str1[11];
//	char str2[11];
//	char *str_move1;
//	char *str_move2;
//
//	int i;
//	i = -1;
//	while (i++ < 9)
//	{
//		str1[i] = i + '0';
//		str2[i] = i + 'a';
//	}
//	str1[10] = '\0'; 
//	str2[10] = '\0';
//
//	str_move1 = str1 + 6;
//	str_move2 = str2 - 6;
//
//	printf("before calling ft_memmove, str1 = %s\n", str1);
//	printf("before calling ft_memmove, str_move1 = %s\n", str_move1);

//	printf("ft_memmove(str2, str1) returns %s\n", \
//			ft_memmove(str2, str1, 11));
//	printf("after calling ft_memmove, str1 = %s\n", str1);
//	printf("after calling ft_memmove, str2 = %s\n", str2);

//	printf("ft_memmove(strt, strmove1) returns %s\n", \
//			ft_memmove(str_move1, str1, 11));
//	printf("after calling ft_memmove, str1 = %s\n", str1);
//	printf("after calling ft_memmove, str_move1 = %s\n", str_move1);

//	printf("ft_memmove(str2, str_move2) returns %s\n", \
//			ft_memmove(str2, str_move2, 11));
//	printf("after calling ft_memmove, str1 = %s\n", str1);
//	printf("after calling ft_memmove, str_move1 = %s\n", str_move2);
//}
