/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:49:06 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/08 10:24:07 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
//#include "../testing_libft/print_array.c"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *re_dest;
	unsigned char *re_src;

	re_dest = dest;
	re_src = (unsigned char *)src;
	while (n-- >= 1)
	{
		if (memcmp(re_src, &c, 1) == 0)
		{
			*re_dest = *re_src;
			return ++re_dest;
		}
		*re_dest = *re_src;
		re_dest++;
		re_src++;
	}
	return NULL;
}

//int main(void)
//{
//	unsigned long int src[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11};
//	unsigned long int ft_dest[11];
//	unsigned long int dest[11];
//	int c;
//	int n;
//
//	n = 11;
//	c = 2;
//	bzero(ft_dest, n*sizeof(unsigned long int));
//	bzero(dest, n*sizeof(unsigned long int));
//	ft_dest[0] = 1;
//	ft_dest[1] = 1;
//	dest[0] = 1;
//	dest[1] = 1;
////	printf("Before:\nsrc is %s\nft_dest is %s\nc is %c\nn is %i\n\n", \
////			src, ft_dest, c, n);
//	printf("Before calling ft_memccpy: ft_dest = ");
//	print_array_ulint(ft_dest, n);
//	printf("\n");
//	ft_memccpy(ft_dest, src, c, n);
//	printf("After calling ft_memccpy: ft_dest = ");
//	print_array_ulint(ft_dest, n);
//	printf("\n");
//	printf("After:\nsrc is ");
//	print_array_ulint(src, n);
//	printf("\nft_dest is ");
//	print_array_ulint(ft_dest, n);
//	printf("\nc is %i\nn is %i\n\n", c, n);
//
//
//	printf("Before calling memccpy: dest = ");
//	print_array_ulint(dest, n);
//	printf("\n");
//	memccpy(dest, src, c, n);
//	printf("After calling memccpy: dest = ");
//	print_array_ulint(dest, n);
//	printf("\n");
//	printf("After:\nsrc is ");
//	print_array_ulint(src, n);
//	printf("\ndest is ");
//	print_array_ulint(dest, n);
//	printf("\nc is %i\nn is %i\n", c, n);
//
//	unsigned long int *placeholder;
//	int i;
//	int match;
//
//	bzero(dest, n*sizeof(int));
//	placeholder = dest;
//
//	match = 0;
//	i = 0;
//	while (i < n * sizeof(int))
//	{
//		if (memcmp(placeholder, &c, 1) == 0)
//			match++;
//		placeholder++;
//		i++;
//	}
//	if (match)
//		printf("match # is %i\n", match);
//	else
//		printf("no match\n");
//
//
//	return 0;
//}
