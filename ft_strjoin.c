// Description
// Allocates (with malloc(3)) and returns a "fresh" string end-
// ing with '\0', result of the concatenation of s1 and s2. If
// the allocation fails the function returns NULL.
//
// Param #1
// The prefix string
//
// Param #2
// The suffix string
//
// Return value
// The "fresh" string result of the concatenation of the 2 strings
//
// libc functions
// malloc(3)

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *fresh_string;

	if (!(fresh_string = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return NULL;
	ft_strcpy(fresh_string, s1);
	ft_strcat(fresh_string, s2);
	return fresh_string;
}
