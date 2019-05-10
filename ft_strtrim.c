// Description
// Allocates (with malloc(3)) and returns a copy of the string
// given as argument without whitespaces at the beginning or at
// the end of the string. Will be considered as whitespaces the
// following characters ' ', '\n', and '\t'. If s has no whites-
// paces at the beginning or at the end, the function returns a
// copy of s. If the allocation fails the function returns NULL.
//
// Param #1
// The string to be trimmed.
//
// Return value
// The "fresh" trimmed string or a copy of s.
//
// libc functions
// malloc(3)

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *fresh_str;
	int end;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	end = strlen(s) - 1;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	if (!(fresh_str = malloc(end + 1)))
		return NULL;
	fresh_str[end] = '\0';
	ft_strncpy(fresh_str, s, end);
	return fresh_str;
}
