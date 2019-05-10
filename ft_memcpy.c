/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:39:44 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/08 18:23:53 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
//#include "../testing_libft/print_array.c"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *re_dest;
	char *re_src;

	re_dest = dest;
	re_src = (char*)src;
	while (n-- > 0)
		*re_dest++ = *re_src++;
	return dest;
}

//int	main(void)
//{
//	float test_float[] = {1.1, 2.1, 3.1, 4.1, 5.0, 6.1, 7.1, 8.1, 9.1, 0.1, 11.1};
//	float test_floata[11];
//	float test_floatb[11];
//	float *x_float;
//	float *y_float;
//	int size;
//
//	size = 0;
//
//	bzero(test_floata, 11*sizeof(float));
//	bzero(test_floatb, 11*sizeof(float));
//	print_array_float(test_floatb, 11);
//
//	y_float = ft_memcpy(test_floatb, test_float, size);
//
//	print_array_float(y_float, 11);
//	printf("\n");
//	char test_char[] = "1234567890";
//	char test_chara[11];
//	char test_charb[11];
//	bzero(test_chara, 11);
//	bzero(test_charb, 11);
//	char *x_char;
//	char *y_char;
//	int size;
//
//	size = 10;
//
//	bzero(test_chara, 11);
//	bzero(test_charb, 11);
//	printf("test_charb before is %s\n", test_charb);
//
//	y_char = ft_memcpy(test_charb, test_char, size);
//
//	printf("test_charb after is %s\n", test_charb);
//}














