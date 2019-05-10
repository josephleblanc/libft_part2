// Description
// Applies the function f to each character in the string passed
// as argument by giving its index as first argument to create a
// "fresh" new string (with malloc(3)) resulting from the suc-
// cessive applications of f.
//
// Param #1
// The string to map.
//
// Param #2
// The funcion to apply to each character of s and its index.
//
// Return value
// The "fresh" string created from the successive applications of
// f.
//
// libc functions
// malloc(3)

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *fresh_string;
	int i;

	i = -1;
	if ((fresh_string = ft_strdup(s)))
	{
		while (s[++i])
			fresh_string[i] = s[i];
	}
	return fresh_string;
}
