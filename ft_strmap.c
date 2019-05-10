// Description
// Applies the function f to each character of the string given
// as argument to create a "fresh" new string (with malloc(3))
// resulting from the successive applications of f.
//
// Param #1
// The string to map.
//
// Param #2
// The function to apply to each character of s.
//
// Return value
// The "fresh" string created from the successive applications of
// f.
//
// libc functions
// malloc(3)

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char *new_str;
	int i;

	i = -1;
	if ((new_str = ft_strdup(s)))
	{
		while (new_str[++i])
			new_str[i] = f(new_str[i]);
	}
	return new_str;
}
