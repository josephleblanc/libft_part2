// Description
// Allocates (with malloc(3)) and returns a "fresh" substring
// from the given string given as argument. The substring begins at
// index start and is of size len. If start and len aren't refer-
// ing to a valid substring, the behavior is undefined. If the
// allocation fails, the function returns NULL.
//   ---> Ambiguity here about the size of the substring: Is it that
//			the substring should be of size len with or without the
//			terminating '\0'?
//
// Param #1
// The string from which to create the substring.
//
// Param #2
// The start index of the substring
//
// Param #3
// The size of the substring
//
// Return value
// The substring
//
// Libc functions
// malloc(3)

#include <libft.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *substring;

	if (!(substring = malloc(len+1)))
		return NULL;
	ft_strncpy(substring, s + start, len);
	substring[len] = '\0';
	return substring;
}
